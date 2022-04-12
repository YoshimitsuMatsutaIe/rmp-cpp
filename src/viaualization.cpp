#include "../include/visualization.hpp"

#include <iostream>
#include <cstdio> 

void simple::plot_root_state_history()
{
    FILE *fp = popen("C:/gnuplot/bin/pgnuplot.exe", "w"); 
    fputs("plot sin(x)\n", fp); 
    fflush(fp); 
    std::cin.get(); //<------------------------------------- 一時停止のために入れる
    pclose(fp);
}