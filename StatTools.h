#pragma once

class StatTools
{
public:
    static long long max(const long long numbers[], int size);
    static long long min(const long long numbers[], int size);
    static double mean(const long long numbers[], int size);
    static long long mode(const long long numbers[], int size);
    static double median(long long numbers[], int size);
    static void stemAndLeafPlot(const long long numbers[], int size);
    static void barChart(const long long numbers[], int size);
};