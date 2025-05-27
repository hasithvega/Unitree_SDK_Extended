#pragma once
#ifndef _LINE_H_
#define _LINE_H_

#include <stdlib.h>

// 实现Bresenham光线跟踪的迭代器   直线算法
class LineIterator   
{
    public:
    LineIterator(int x0, int y0, int x1, int y1)
        : x0_(x0),
        y0_(y0),
        x1_(x1),
        y1_(y1),
        x_(x0),    // X and Y start of at first endpoint. //第一个端点的X和Y起点。
        y_(y0),
        deltax_(abs(x1 - x0)),   // 第一个端点 和第二个端点的 差 的 绝对值 = x的距离
        deltay_(abs(y1 - y0)),
        curpixel_(0)
        {
            if (x1_ >= x0_) {                // The x-values are increasing // x值正在增加
                xinc1_ = 1;
                xinc2_ = 1;
            } else {                      // The x-values are decreasing // x值正在减小
                xinc1_ = -1;
                xinc2_ = -1;
            }

            if (y1_ >= y0_) {               // The y-values are increasing  // y值正在增加
                yinc1_ = 1;
                yinc2_ = 1;
            } else {                      // The y-values are decreasing // y值正在减小
                yinc1_ = -1;
                yinc2_ = -1;
            }

            if (deltax_ >= deltay_) {        // There is at least one x-value for every y-value 每个y值至少有一个x值
                xinc1_ = 0;                  // Don't change the x when numerator >= denominator 当分子>=分母时，不要更改x  
                yinc2_ = 0;                  // Don't change the y for every iteration 不要为每次迭代更改y
                den_ = deltax_;
                num_ = deltax_ / 2;
                numadd_ = deltay_;
              numpixels_ = deltax_;         // There are more x-values than y-values x值多于y值
            } else {                      // There is at least one y-value for every x-value 每个x值至少有一个y值
                xinc2_ = 0;                  // Don't change the x for every iteration 不要每次迭代都更改x
                yinc1_ = 0;                  // Don't change the y when numerator >= denominator 当分子>=分母时，不要更改y
                den_ = deltay_;
                num_ = deltay_ / 2;
                numadd_ = deltax_;
              numpixels_ = deltay_;         // There are more y-values than x-values y值比x值多
            }
        }
        
        // 判断是否有效 
        bool isValid() const
        {
            return curpixel_ <= numpixels_;  // 当前像素 <= 总体像素 则有效
        }
        
        // 推进 相当于 line++
        void advance()
        {
            num_ += numadd_;              // Increase the numerator by the top of the fraction 将分子增加分数的顶部
            if (num_ >= den_) {           // Check if numerator >= denominator 检查分子是否>=分母
              num_ -= den_;               // Calculate the new numerator value 计算新分子值
              x_ += xinc1_;               // Change the x as appropriate
              y_ += yinc1_;               // Change the y as appropriate
            }
            x_ += xinc2_;                 // Change the x as appropriate 根据需要更改x
            y_ += yinc2_;                 // Change the y as appropriate 根据需要更改y

            curpixel_++;
        }

        int getX() const
        {
            return x_;
        }
        int getY() const
        {
            return y_;
        }

        int getX0() const
        {
            return x0_;
        }
        int getY0() const
        {
            return y0_;
        }

        int getX1() const
        {
            return x1_;
        }
        int getY1() const
        {
            return y1_;
        }

    private:

        int x0_;  ///< X coordinate of first end point. 第一个端点的X坐标。
        int y0_;  ///< Y coordinate of first end point.
        int x1_;  ///< X coordinate of second end point. 第二个端点的X坐标。
        int y1_;  ///< Y coordinate of second end point.

        int x_;  ///< X coordinate of current point. 当前点的X坐标。
        int y_;  ///< Y coordinate of current point.

        int deltax_;  ///< Difference between Xs of endpoints. 端点X之间的差异。
        int deltay_;  ///< Difference between Ys of endpoints.

        int curpixel_;  ///< index of current point in line loop. 线路回路中当前点的索引。

        int xinc1_, xinc2_, yinc1_, yinc2_;
        int den_, num_, numadd_, numpixels_;
};

#endif