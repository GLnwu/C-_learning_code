/*************************************************************************
    > File Name: common.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 02 Oct 2016 11:39:02 PM CST
 ************************************************************************/
#include <cstdlib>
#ifndef COMMON_H_
#define COMMON_H_
//填充数字到数据中
int fill_array(double Array[],const unsigned int Number);
//输出数组内容
int show_array(const double Array[],const unsigned int Number);
//计算平均值
double average(const double Array[],const unsigned int Number);
//求和
double sum(const double Array[],const unsigned int Number);
#endif

