#pragma once
#ifndef NAV2_NAVFN_PLANNER__NAVFN_HPP_
#define NAV2_NAVFN_PLANNER__NAVFN_HPP_

#include <cmath>
#include <cstdint>
#include <cstring>
#include <cstdio>

// cost defs
#define COST_UNKNOWN_ROS 255  // 255 is unknown cost
#define COST_OBS 254  // 254 for forbidden regions
#define COST_OBS_ROS 253  // ROS values of 253 are obstacles

// navfn cost values are set to
// COST_NEUTRAL + COST_FACTOR * costmap_cost_value.
// Incoming costmap cost values are in the range 0 to 252.
// With COST_NEUTRAL of 50, the COST_FACTOR needs to be about 0.8 to
// ensure the input values are spread evenly over the output range, 50
// to 253.  If COST_FACTOR is higher, cost values will have a plateau
// around obstacles and the planner will then treat (for example) the
// whole width of a narrow hallway as equally undesirable and thus
// will not plan paths down the center.

#define COST_NEUTRAL 50  // Set this to "open space" value 50  中立区域的cost值
#define COST_FACTOR 0.8  // Used for translating costs in NavFn::setCostmap() 0.8 cost因子，用于将每层costmap对应的cost数值乘起来

// Define the cost type in the case that it is not set. However, this allows
// clients to modify it without changing the file. Arguably, it is better to require it to
// be defined by a user explicitly
#ifndef COSTTYPE
#define COSTTYPE unsigned char  // Whatever is used...
#endif

// potential defs
#define POT_HIGH 1.0e10  // unassigned cell potential

// priority buffers
#define PRIORITYBUFSIZE 10000

using namespace std;


// 实现Bresenham光线跟踪的迭代器   直线算法
class NavFn   
{
  public:
  int nx = 0, ny = 0, ns = 0;  /**< size of grid, in pixels */

/**
   * @brief  Constructs the planner
   * @param nx The x size of the map
   * @param ny The y size of the map
   */
  NavFn(int xs, int ys);

  ~NavFn();

  /**
   * @brief  Sets or resets the size of the map
   * @param nx The x size of the map
   * @param ny The y size of the map
   */
  void setNavArr(int xs, int ys);
  /**
   * @brief  Set up the cost array for the planner, usually from ROS
   * @param cmap The costmap
   * @param isROS Whether or not the costmap is coming in in ROS format
   * @param allow_unknown Whether or not the planner should be allowed to plan through
   *   unknown space
   */
  void setCostmap(const COSTTYPE * cmap, bool isROS = true, bool allow_unknown = true);

  /**
   * @brief  Calculates a plan using the A* heuristic, returns true if one is found
   * @return True if a plan is found, false otherwise
   */
  bool calcNavFnAstar();

  /**
   * @brief Caclulates the full navigation function using Dijkstra
   */
  bool calcNavFnDijkstra(bool atStart = false);

  /**
   * @brief  Accessor for the x-coordinates of a path
   * @return The x-coordinates of a path
   */
  float * getPathX();

  /**
   * @brief  Accessor for the y-coordinates of a path
   * @return The y-coordinates of a path
   */
  float * getPathY();

  /**
   * @brief  Accessor for the length of a path
   * @return The length of a path, 0 if not found
   */
  int getPathLen();

  /**
   * @brief  Gets the cost of the path found the last time a navigation function was computed
   * @return The cost of the last path found
   */
  float getLastPathCost();

  /** cell arrays */
  COSTTYPE * costarr;  /**< cost array in 2D configuration space */
  float * potarr;  /**< potential array, navigation function potential */
  bool * pending;  /**< pending cells during propagation */
  int nobs;  /**< number of obstacle cells */

  /** block priority buffers */
  int * pb1, * pb2, * pb3;  /**< storage buffers for priority blocks */
  int * curP, * nextP, * overP;  /**< priority buffer block ptrs */
  int curPe, nextPe, overPe;  /**< end points of arrays */

  /** block priority thresholds */
  float curT;  /**< current threshold */
  float priInc;  /**< priority threshold increment */

  /** goal and start positions */
  /**
   * @brief  Sets the goal position for the planner.
   * Note: the navigation cost field computed gives the cost to get to a given point
   * from the goal, not from the start.
   * @param goal the goal position
   */
  void setGoal(int * goal);

  /**
   * @brief  Sets the start position for the planner.
   * Note: the navigation cost field computed gives the cost to get to a given point
   * from the goal, not from the start.
   * @param start the start position
   */
  void setStart(const int * start);

  int goal[2];
  int start[2];
  /**
   * @brief  Initialize cell k with cost v for propagation
   * @param k the cell to initialize
   * @param v the cost to give to the cell
   */
  void initCost(int k, float v);

  /** propagation */

  /**
   * @brief  Updates the cell at index n
   * @param n The index to update
   */
  void updateCell(int n);

  /**
   * @brief  Updates the cell at index n using the A* heuristic
   * @param n The index to update
   */
  void updateCellAstar(int n);

  /**
   * @brief  Set up navigation potential arrays for new propagation
   * @param keepit whether or not use COST_NEUTRAL
   */
  void setupNavFn(bool keepit = false);

  /**
   * @brief  Run propagation for <cycles> iterations, or until start is reached using
   * breadth-first Dijkstra method
   * @param cycles The maximum number of iterations to run for
   * @param atStart Whether or not to stop when the start point is reached
   * @return true if the start point is reached
   */
  bool propNavFnDijkstra(int cycles, bool atStart = false);

  /**
   * @brief  Run propagation for <cycles> iterations, or until start is reached using
   * the best-first A* method with Euclidean distance heuristic
   * @param cycles The maximum number of iterations to run for
   * @return true if the start point is reached
   */
  bool propNavFnAstar(int cycles);  /**< returns true if start point found */

  /** gradient and paths */
  float * gradx, * grady;  /**< gradient arrays, size of potential array */
  float * pathx, * pathy;  /**< path points, as subpixel cell coordinates */
  int npath;  /**< number of path points */
  int npathbuf;  /**< size of pathx, pathy buffers */

  float last_path_cost_;  /**< Holds the cost of the path found the last time A* was called */

  /**
   * @brief  Calculates the path for at mose <n> cycles
   * @param n The maximum number of cycles to run for
   * @return The lenght of the path found, 0 if none
   */
  int calcPath(int n, int * st = nullptr);

  /**
   * @brief  Calculate gradient at a cell
   * @param n Cell number <n>
   * @return float norm
   */
  float gradCell(int n);  /**< calculates gradient at cell <n>, returns norm */

  float pathStep;  /**< step size for following gradient */

    private:

};

NavFn::NavFn(int xs, int ys)
{
  // create cell arrays
  costarr = nullptr;
  potarr = nullptr;
  pending = nullptr;
  gradx = grady = nullptr;
  setNavArr(xs, ys);

  // priority buffers
  pb1 = new int[PRIORITYBUFSIZE];
  pb2 = new int[PRIORITYBUFSIZE];
  pb3 = new int[PRIORITYBUFSIZE];

  // for Dijkstra (breadth-first), set to COST_NEUTRAL
  // for A* (best-first), set to COST_NEUTRAL
  priInc = 2 * COST_NEUTRAL;

  // goal and start
  goal[0] = goal[1] = 0;
  start[0] = start[1] = 0;

  // display function
  // displayFn = NULL;
  // displayInt = 0;

  // path buffers
  npathbuf = npath = 0;
  pathx = pathy = NULL;
  pathStep = 0.5;
}


NavFn::~NavFn()
{
  if (costarr) {
    delete[] costarr;
  }
  if (potarr) {
    delete[] potarr;
  }
  if (pending) {
    delete[] pending;
  }
  if (gradx) {
    delete[] gradx;
  }
  if (grady) {
    delete[] grady;
  }
  if (pathx) {
    delete[] pathx;
  }
  if (pathy) {
    delete[] pathy;
  }
  if (pb1) {
    delete[] pb1;
  }
  if (pb2) {
    delete[] pb2;
  }
  if (pb3) {
    delete[] pb3;
  }
}


//
// set goal, start positions for the nav fn
//

void
NavFn::setGoal(int * g)
{
  goal[0] = g[0];
  goal[1] = g[1];
  // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[NavFn] Setting goal to %d,%d\n", goal[0], goal[1]);
}

void
NavFn::setStart(const int * g)
{
  start[0] = g[0];
  start[1] = g[1];
  // RCLCPP_DEBUG(
  //   rclcpp::get_logger("rclcpp"), "[NavFn] Setting start to %d,%d\n", start[0],
    // start[1]);
}

//
// Set/Reset map size
//

void
NavFn::setNavArr(int xs, int ys)
{
  // cout<<"1.2.0"<<endl;
  // cout<< "xs = "<< xs <<endl;

  // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[NavFn] Array is %d x %d\n", xs, ys);
  // cout<<"1.2.1 RCLCPP_DEBUG 0"<<endl;
  // cout<< "nx = "<< nx <<endl;
  // cout<< "xs = "<< xs <<endl;

  // cout<< "ny = "<< ny << "ys = "<< ys <<endl;

  nx = xs;
  // cout<<"1.2.1 RCLCPP_DEBUG 1"<<endl;

  ny = ys;
  // cout<<"1.2.1 RCLCPP_DEBUG 2"<<endl;

  ns = nx * ny;
  // cout<<"1.2.1"<<endl;

  if (costarr) {
    delete[] costarr;
  }
  if (potarr) {
    delete[] potarr;
  }
  if (pending) {
    delete[] pending;
  }

  if (gradx) {
    delete[] gradx;
  }
  if (grady) {
    delete[] grady;
  }     
  //  cout<<"1.2.2"<<endl;


  costarr = new COSTTYPE[ns];  // cost array, 2d config space
  memset(costarr, 0, ns * sizeof(COSTTYPE));
  potarr = new float[ns];  // navigation potential array
  pending = new bool[ns];
  memset(pending, 0, ns * sizeof(bool));
  gradx = new float[ns];
  grady = new float[ns];
  // cout<<"1.2.3"<<endl;

}


//
// set up cost array, usually from ROS
//

void
NavFn::setCostmap(const COSTTYPE * cmap, bool isROS, bool allow_unknown)
{
  COSTTYPE * cm = costarr;
  if (isROS) {  // ROS-type cost array
    for (int i = 0; i < ny; i++) {
      int k = i * nx;
      for (int j = 0; j < nx; j++, k++, cmap++, cm++) {
        // This transforms the incoming cost values:
        // COST_OBS                 -> COST_OBS (incoming "lethal obstacle")
        // COST_OBS_ROS             -> COST_OBS (incoming "inscribed inflated obstacle")
        // values in range 0 to 252 -> values from COST_NEUTRAL to COST_OBS_ROS.
        *cm = COST_OBS;
        int v = *cmap;
        if (v < COST_OBS_ROS) {
          v = COST_NEUTRAL + COST_FACTOR * v;
          if (v >= COST_OBS) {
            v = COST_OBS - 1;
          }
          *cm = v;
        } else if (v == COST_UNKNOWN_ROS && allow_unknown) {
          v = COST_OBS - 1;
          *cm = v;
        }
      }
    }
  } else {  // not a ROS map, just a PGM
    for (int i = 0; i < ny; i++) {
      int k = i * nx;
      for (int j = 0; j < nx; j++, k++, cmap++, cm++) {
        *cm = COST_OBS;
        if (i < 7 || i > ny - 8 || j < 7 || j > nx - 8) {
          continue;  // don't do borders
        }
        int v = *cmap;
        if (v < COST_OBS_ROS) {
          v = COST_NEUTRAL + COST_FACTOR * v;
          if (v >= COST_OBS) {
            v = COST_OBS - 1;
          }
          *cm = v;
        } else if (v == COST_UNKNOWN_ROS) {
          v = COST_OBS - 1;
          *cm = v;
        }
      }
    }
  }
}

bool
NavFn::calcNavFnDijkstra(bool atStart)
{
  setupNavFn(true);

  // calculate the nav fn and path
  return propNavFnDijkstra(std::max(nx * ny / 20, nx + ny), atStart);
}


//
// calculate navigation function, given a costmap, goal, and start
//

bool
NavFn::calcNavFnAstar()
{
  setupNavFn(true);

  // calculate the nav fn and path
  return propNavFnAstar(std::max(nx * ny / 20, nx + ny));
}

//
// returning values
//

float * NavFn::getPathX() {return pathx;}
float * NavFn::getPathY() {return pathy;}
int NavFn::getPathLen() {return npath;}

// inserting onto the priority blocks
#define push_cur(n)  {if (n >= 0 && n < ns && !pending[n] && \
      costarr[n] < COST_OBS && curPe < PRIORITYBUFSIZE) \
    {curP[curPe++] = n; pending[n] = true;}}
#define push_next(n) {if (n >= 0 && n < ns && !pending[n] && \
      costarr[n] < COST_OBS && nextPe < PRIORITYBUFSIZE) \
    {nextP[nextPe++] = n; pending[n] = true;}}
#define push_over(n) {if (n >= 0 && n < ns && !pending[n] && \
      costarr[n] < COST_OBS && overPe < PRIORITYBUFSIZE) \
    {overP[overPe++] = n; pending[n] = true;}}


// Set up navigation potential arrays for new propagation

void
NavFn::setupNavFn(bool keepit)
{
  // reset values in propagation arrays
  for (int i = 0; i < ns; i++) {
    potarr[i] = POT_HIGH;
    if (!keepit) {
      costarr[i] = COST_NEUTRAL;
    }
    gradx[i] = grady[i] = 0.0;
  }

  // outer bounds of cost array
  COSTTYPE * pc;
  pc = costarr;
  for (int i = 0; i < nx; i++) {
    *pc++ = COST_OBS;
  }
  pc = costarr + (ny - 1) * nx;
  for (int i = 0; i < nx; i++) {
    *pc++ = COST_OBS;
  }
  pc = costarr;
  for (int i = 0; i < ny; i++, pc += nx) {
    *pc = COST_OBS;
  }
  pc = costarr + nx - 1;
  for (int i = 0; i < ny; i++, pc += nx) {
    *pc = COST_OBS;
  }

  // priority buffers
  curT = COST_OBS;
  curP = pb1;
  curPe = 0;
  nextP = pb2;
  nextPe = 0;
  overP = pb3;
  overPe = 0;
  memset(pending, 0, ns * sizeof(bool));

  // set goal
  int k = goal[0] + goal[1] * nx;
  initCost(k, 0);

  // find # of obstacle cells
  pc = costarr;
  int ntot = 0;
  for (int i = 0; i < ns; i++, pc++) {
    if (*pc >= COST_OBS) {
      ntot++;  // number of cells that are obstacles
    }
  }
  nobs = ntot;
}


// initialize a goal-type cost for starting propagation

void
NavFn::initCost(int k, float v)
{
  potarr[k] = v;
  push_cur(k + 1);
  push_cur(k - 1);
  push_cur(k - nx);
  push_cur(k + nx);
}


//
// Critical function: calculate updated potential value of a cell,
//   given its neighbors' values
// Planar-wave update calculation from two lowest neighbors in a 4-grid
// Quadratic approximation to the interpolated value
// No checking of bounds here, this function should be fast
//

#define INVSQRT2 0.707106781

inline void
NavFn::updateCell(int n)
{
  // get neighbors
  float u, d, l, r;
  l = potarr[n - 1];
  r = potarr[n + 1];
  u = potarr[n - nx];
  d = potarr[n + nx];
  // ROS_INFO("[Update] c: %0.1f  l: %0.1f  r: %0.1f  u: %0.1f  d: %0.1f\n",
  //  potarr[n], l, r, u, d);
  // ROS_INFO("[Update] cost: %d\n", costarr[n]);

  // find lowest, and its lowest neighbor
  float ta, tc;
  if (l < r) {tc = l;} else {tc = r;}
  if (u < d) {ta = u;} else {ta = d;}

  // do planar wave update
  if (costarr[n] < COST_OBS) {  // don't propagate into obstacles
    float hf = static_cast<float>(costarr[n]);  // traversability factor
    float dc = tc - ta;  // relative cost between ta,tc
    if (dc < 0) {  // ta is lowest
      dc = -dc;
      ta = tc;
    }

    // calculate new potential
    float pot;
    if (dc >= hf) {  // if too large, use ta-only update
      pot = ta + hf;
    } else {  // two-neighbor interpolation update
      // use quadratic approximation
      // might speed this up through table lookup, but still have to
      //   do the divide
      float d = dc / hf;
      float v = -0.2301 * d * d + 0.5307 * d + 0.7040;
      pot = ta + hf * v;
    }

    //      ROS_INFO("[Update] new pot: %d\n", costarr[n]);

    // now add affected neighbors to priority blocks
    if (pot < potarr[n]) {
      float le = INVSQRT2 * static_cast<float>(costarr[n - 1]);
      float re = INVSQRT2 * static_cast<float>(costarr[n + 1]);
      float ue = INVSQRT2 * static_cast<float>(costarr[n - nx]);
      float de = INVSQRT2 * static_cast<float>(costarr[n + nx]);
      potarr[n] = pot;
      if (pot < curT) {  // low-cost buffer block
        if (l > pot + le) {push_next(n - 1);}
        if (r > pot + re) {push_next(n + 1);}
        if (u > pot + ue) {push_next(n - nx);}
        if (d > pot + de) {push_next(n + nx);}
      } else {  // overflow block
        if (l > pot + le) {push_over(n - 1);}
        if (r > pot + re) {push_over(n + 1);}
        if (u > pot + ue) {push_over(n - nx);}
        if (d > pot + de) {push_over(n + nx);}
      }
    }
  }
}

//
// Use A* method for setting priorities
// Critical function: calculate updated potential value of a cell,
//   given its neighbors' values
// Planar-wave update calculation from two lowest neighbors in a 4-grid
// Quadratic approximation to the interpolated value
// No checking of bounds here, this function should be fast
//

#define INVSQRT2 0.707106781

inline void
NavFn::updateCellAstar(int n)
{
  // get neighbors
  float u, d, l, r;
  l = potarr[n - 1];
  r = potarr[n + 1];
  u = potarr[n - nx];
  d = potarr[n + nx];
  // ROS_INFO("[Update] c: %0.1f  l: %0.1f  r: %0.1f  u: %0.1f  d: %0.1f\n",
  // potarr[n], l, r, u, d);
  // ROS_INFO("[Update] cost of %d: %d\n", n, costarr[n]);

  // find lowest, and its lowest neighbor
  float ta, tc;
  if (l < r) {tc = l;} else {tc = r;}
  if (u < d) {ta = u;} else {ta = d;}

  // do planar wave update
  if (costarr[n] < COST_OBS) {  // don't propagate into obstacles
    float hf = static_cast<float>(costarr[n]);  // traversability factor
    float dc = tc - ta;  // relative cost between ta,tc
    if (dc < 0) {  // ta is lowest
      dc = -dc;
      ta = tc;
    }

    // calculate new potential
    float pot;
    if (dc >= hf) {  // if too large, use ta-only update
      pot = ta + hf;
    } else {  // two-neighbor interpolation update
      // use quadratic approximation
      // might speed this up through table lookup, but still have to
      //   do the divide
      float d = dc / hf;
      float v = -0.2301 * d * d + 0.5307 * d + 0.7040;
      pot = ta + hf * v;
    }

    // ROS_INFO("[Update] new pot: %d\n", costarr[n]);

    // now add affected neighbors to priority blocks
    if (pot < potarr[n]) {
      float le = INVSQRT2 * static_cast<float>(costarr[n - 1]);
      float re = INVSQRT2 * static_cast<float>(costarr[n + 1]);
      float ue = INVSQRT2 * static_cast<float>(costarr[n - nx]);
      float de = INVSQRT2 * static_cast<float>(costarr[n + nx]);

      // calculate distance
      int x = n % nx;
      int y = n / nx;
      float dist = hypot(x - start[0], y - start[1]) * static_cast<float>(COST_NEUTRAL);

      potarr[n] = pot;
      pot += dist;
      if (pot < curT) {  // low-cost buffer block
        if (l > pot + le) {push_next(n - 1);}
        if (r > pot + re) {push_next(n + 1);}
        if (u > pot + ue) {push_next(n - nx);}
        if (d > pot + de) {push_next(n + nx);}
      } else {
        if (l > pot + le) {push_over(n - 1);}
        if (r > pot + re) {push_over(n + 1);}
        if (u > pot + ue) {push_over(n - nx);}
        if (d > pot + de) {push_over(n + nx);}
      }
    }
  }
}


//
// main propagation function
// Dijkstra method, breadth-first
// runs for a specified number of cycles,
//   or until it runs out of cells to update,
//   or until the Start cell is found (atStart = true)
//

bool
NavFn::propNavFnDijkstra(int cycles, bool atStart)
{
  int nwv = 0;  // max priority block size
  int nc = 0;  // number of cells put into priority blocks
  int cycle = 0;  // which cycle we're on

  // set up start cell
  int startCell = start[1] * nx + start[0];

  for (; cycle < cycles; cycle++) {  // go for this many cycles, unless interrupted
    if (curPe == 0 && nextPe == 0) {  // priority blocks empty
      break;
    }

    // stats
    nc += curPe;
    if (curPe > nwv) {
      nwv = curPe;
    }

    // reset pending flags on current priority buffer
    int * pb = curP;
    int i = curPe;
    while (i-- > 0) {
      pending[*(pb++)] = false;
    }

    // process current priority buffer
    pb = curP;
    i = curPe;
    while (i-- > 0) {
      updateCell(*pb++);
    }

    // if (displayInt > 0 && (cycle % displayInt) == 0) {
    //   displayFn(this);
    // }

    // swap priority blocks curP <=> nextP
    curPe = nextPe;
    nextPe = 0;
    pb = curP;  // swap buffers
    curP = nextP;
    nextP = pb;

    // see if we're done with this priority level
    if (curPe == 0) {
      curT += priInc;  // increment priority threshold
      curPe = overPe;  // set current to overflow block
      overPe = 0;
      pb = curP;  // swap buffers
      curP = overP;
      overP = pb;
    }

    // check if we've hit the Start cell
    if (atStart) {
      if (potarr[startCell] < POT_HIGH) {
        break;
      }
    }
  }

  // RCLCPP_DEBUG(
  //   rclcpp::get_logger("rclcpp"),
  //   "[NavFn] Used %d cycles, %d cells visited (%d%%), priority buf max %d\n",
  //   cycle, nc, (int)((nc * 100.0) / (ns - nobs)), nwv);

  return (cycle < cycles) ? true : false;
}

//
// main propagation function
// A* method, best-first
// uses Euclidean distance heuristic
// runs for a specified number of cycles,
//   or until it runs out of cells to update,
//   or until the Start cell is found (atStart = true)
//

bool
NavFn::propNavFnAstar(int cycles)
{
  int nwv = 0;  // max priority block size
  int nc = 0;  // number of cells put into priority blocks
  int cycle = 0;  // which cycle we're on

  // set initial threshold, based on distance
  float dist = hypot(goal[0] - start[0], goal[1] - start[1]) * static_cast<float>(COST_NEUTRAL);
  curT = dist + curT;

  // set up start cell
  int startCell = start[1] * nx + start[0];

  // do main cycle
  for (; cycle < cycles; cycle++) {  // go for this many cycles, unless interrupted
    if (curPe == 0 && nextPe == 0) {  // priority blocks empty
      break;
    }

    // stats
    nc += curPe;
    if (curPe > nwv) {
      nwv = curPe;
    }

    // reset pending flags on current priority buffer
    int * pb = curP;
    int i = curPe;
    while (i-- > 0) {
      pending[*(pb++)] = false;
    }

    // process current priority buffer
    pb = curP;
    i = curPe;
    while (i-- > 0) {
      updateCellAstar(*pb++);
    }

    // if (displayInt > 0 && (cycle % displayInt) == 0) {
    //   displayFn(this);
    // }

    // swap priority blocks curP <=> nextP
    curPe = nextPe;
    nextPe = 0;
    pb = curP;  // swap buffers
    curP = nextP;
    nextP = pb;

    // see if we're done with this priority level
    if (curPe == 0) {
      curT += priInc;  // increment priority threshold
      curPe = overPe;  // set current to overflow block
      overPe = 0;
      pb = curP;  // swap buffers
      curP = overP;
      overP = pb;
    }

    // check if we've hit the Start cell
    if (potarr[startCell] < POT_HIGH) {
      break;
    }
  }

  last_path_cost_ = potarr[startCell];

  // RCLCPP_DEBUG(
  //   rclcpp::get_logger("rclcpp"),
  //   "[NavFn] Used %d cycles, %d cells visited (%d%%), priority buf max %d\n",
  //   cycle, nc, (int)((nc * 100.0) / (ns - nobs)), nwv);

  if (potarr[startCell] < POT_HIGH) {
    return true;  // finished up here}
  } else {
    return false;
  }
}


float NavFn::getLastPathCost()
{
  return last_path_cost_;
}


//
// Path construction
// Find gradient at array points, interpolate path
// Use step size of pathStep, usually 0.5 pixel
//
// Some sanity checks:
//  1. Stuck at same index position
//  2. Doesn't get near goal
//  3. Surrounded by high potentials
//

int
NavFn::calcPath(int n, int * st)
{
  // test write
  // savemap("test");

  // check path arrays
  if (npathbuf < n) {
    if (pathx) {delete[] pathx;}
    if (pathy) {delete[] pathy;}
    pathx = new float[n];
    pathy = new float[n];
    npathbuf = n;
  }

  // set up start position at cell
  // st is always upper left corner for 4-point bilinear interpolation
  if (st == NULL) {st = start;}
  int stc = st[1] * nx + st[0];

  // set up offset
  float dx = 0;
  float dy = 0;
  npath = 0;

  // go for <n> cycles at most
  for (int i = 0; i < n; i++) {
    // check if near goal
    int nearest_point = std::max(
      0,
      std::min(
        nx * ny - 1, stc + static_cast<int>(round(dx)) +
        static_cast<int>(nx * round(dy))));
    if (potarr[nearest_point] < COST_NEUTRAL) {
      pathx[npath] = static_cast<float>(goal[0]);
      pathy[npath] = static_cast<float>(goal[1]);
      return ++npath;  // done!
    }

    if (stc < nx || stc > ns - nx) {  // would be out of bounds
      // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[PathCalc] Out of bounds");
      return 0;
    }

    // add to path
    pathx[npath] = stc % nx + dx;
    pathy[npath] = stc / nx + dy;
    npath++;

    bool oscillation_detected = false;
    if (npath > 2 &&
      pathx[npath - 1] == pathx[npath - 3] &&
      pathy[npath - 1] == pathy[npath - 3])
    {
      // RCLCPP_DEBUG(
      //   rclcpp::get_logger("rclcpp"),
      //   "[PathCalc] oscillation detected, attempting fix.");
      oscillation_detected = true;
    }

    int stcnx = stc + nx;
    int stcpx = stc - nx;

    // check for potentials at eight positions near cell
    if (potarr[stc] >= POT_HIGH ||
      potarr[stc + 1] >= POT_HIGH ||
      potarr[stc - 1] >= POT_HIGH ||
      potarr[stcnx] >= POT_HIGH ||
      potarr[stcnx + 1] >= POT_HIGH ||
      potarr[stcnx - 1] >= POT_HIGH ||
      potarr[stcpx] >= POT_HIGH ||
      potarr[stcpx + 1] >= POT_HIGH ||
      potarr[stcpx - 1] >= POT_HIGH ||
      oscillation_detected)
    {
      // RCLCPP_DEBUG(
      //   rclcpp::get_logger("rclcpp"),
      //   "[Path] Pot fn boundary, following grid (%0.1f/%d)", potarr[stc], npath);

      // check eight neighbors to find the lowest
      int minc = stc;
      int minp = potarr[stc];
      int st = stcpx - 1;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st++;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st++;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st = stc - 1;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st = stc + 1;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st = stcnx - 1;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st++;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      st++;
      if (potarr[st] < minp) {minp = potarr[st]; minc = st;}
      stc = minc;
      dx = 0;
      dy = 0;

      // RCLCPP_DEBUG(
      //   rclcpp::get_logger("rclcpp"), "[Path] Pot: %0.1f  pos: %0.1f,%0.1f",
      //   potarr[stc], pathx[npath - 1], pathy[npath - 1]);

      if (potarr[stc] >= POT_HIGH) {
        // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[PathCalc] No path found, high potential");
        // savemap("navfn_highpot");
        return 0;
      }
    } else {  // have a good gradient here
      // get grad at four positions near cell
      gradCell(stc);
      gradCell(stc + 1);
      gradCell(stcnx);
      gradCell(stcnx + 1);


      // get interpolated gradient
      float x1 = (1.0 - dx) * gradx[stc] + dx * gradx[stc + 1];
      float x2 = (1.0 - dx) * gradx[stcnx] + dx * gradx[stcnx + 1];
      float x = (1.0 - dy) * x1 + dy * x2;  // interpolated x
      float y1 = (1.0 - dx) * grady[stc] + dx * grady[stc + 1];
      float y2 = (1.0 - dx) * grady[stcnx] + dx * grady[stcnx + 1];
      float y = (1.0 - dy) * y1 + dy * y2;  // interpolated y


      // check for zero gradient, failed
      if (x == 0.0 && y == 0.0) {
        // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[PathCalc] Zero gradient");
        return 0;
      }

      // move in the right direction
      float ss = pathStep / hypot(x, y);
      dx += x * ss;
      dy += y * ss;

      // check for overflow
      if (dx > 1.0) {stc++; dx -= 1.0;}
      if (dx < -1.0) {stc--; dx += 1.0;}
      if (dy > 1.0) {stc += nx; dy -= 1.0;}
      if (dy < -1.0) {stc -= nx; dy += 1.0;}
    }

    //      ROS_INFO("[Path] Pot: %0.1f  grad: %0.1f,%0.1f  pos: %0.1f,%0.1f\n",
    //      potarr[stc], x, y, pathx[npath-1], pathy[npath-1]);
  }

  //  return npath;  // out of cycles, return failure
  // RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[PathCalc] No path found, path too long");
  // savemap("navfn_pathlong");
  return 0;  // out of cycles, return failure
}


//
// gradient calculations
//

// calculate gradient at a cell
// positive value are to the right and down
float
NavFn::gradCell(int n)
{
  if (gradx[n] + grady[n] > 0.0) {  // check this cell
    return 1.0;
  }

  if (n < nx || n > ns - nx) {  // would be out of bounds
    return 0.0;
  }

  float cv = potarr[n];
  float dx = 0.0;
  float dy = 0.0;

  // check for in an obstacle
  if (cv >= POT_HIGH) {
    if (potarr[n - 1] < POT_HIGH) {
      dx = -COST_OBS;
    } else if (potarr[n + 1] < POT_HIGH) {
      dx = COST_OBS;
    }
    if (potarr[n - nx] < POT_HIGH) {
      dy = -COST_OBS;
    } else if (potarr[n + nx] < POT_HIGH) {
      dy = COST_OBS;
    }
  } else {  // not in an obstacle
    // dx calc, average to sides
    if (potarr[n - 1] < POT_HIGH) {
      dx += potarr[n - 1] - cv;
    }
    if (potarr[n + 1] < POT_HIGH) {
      dx += cv - potarr[n + 1];
    }

    // dy calc, average to sides
    if (potarr[n - nx] < POT_HIGH) {
      dy += potarr[n - nx] - cv;
    }
    if (potarr[n + nx] < POT_HIGH) {
      dy += cv - potarr[n + nx];
    }
  }

  // normalize
  float norm = hypot(dx, dy);
  if (norm > 0) {
    norm = 1.0 / norm;
    gradx[n] = norm * dx;
    grady[n] = norm * dy;
  }
  return norm;
}

#endif