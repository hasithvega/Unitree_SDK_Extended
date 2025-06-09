//
// Created by zeen on 23-5-6.
//

#ifndef MULTIMAP_SERVER_COUT_COLOR_H
#define MULTIMAP_SERVER_COUT_COLOR_H

//the following are UBUNTU/LINUX ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#define DEBUG_YELLOW(...) \
std::cout<<YELLOW<<__VA_ARGS__<<RESET<<std::endl

#define DEBUG_GREEN(...) \
std::cout<<GREEN<<__VA_ARGS__<<RESET<<std::endl

#define ERROR_RED(...) \
std::cout<<RED<<__VA_ARGS__<<RESET<<std::endl

#define ERROR_BLUE(...) \
std::cout<<BLUE<<__VA_ARGS__<<RESET<<std::endl

#define COUT_GREEN(...) \
std::cout<<GREEN<<__VA_ARGS__<<RESET<<std::endl

#define COUT(...) \
std::cout<<__VA_ARGS__<<std::endl
#endif //MULTIMAP_SERVER_COUT_COLOR_H
