#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>

class StatTools
{
public:
    static long long max(const long long *arr, int size);
    static long long min(const long long *arr, int size);
    static double mean(const long long *arr, int size);
    static long long mode(const long long *arr, int size);
    static double median(long long *arr, int size);
    static void stemAndLeafPlot(const long long *arr, int size);
    static void barChart(const long long *arr, int size);
};