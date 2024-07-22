#include "StatTools.h"

long long StatTools::max(const long long *arr, int size)
{
    long long maxVal = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

long long StatTools::min(const long long *arr, int size)
{
    long long minVal = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

double StatTools::mean(const long long *arr, int size)
{
    long long sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

long long StatTools::mode(const long long *arr, int size)
{
    long long *sortedArr = new long long[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    long long mode = sortedArr[0];
    int maxCount = 1, currentCount = 1;

    for (int i = 1; i < size; ++i)
    {
        if (sortedArr[i] == sortedArr[i - 1])
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                mode = sortedArr[i - 1];
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount)
    {
        mode = sortedArr[size - 1];
    }

    delete[] sortedArr;
    return mode;
}

double StatTools::median(long long *arr, int size)
{
    std::sort(arr, arr + size);
    if (size % 2 == 0)
    {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
    else
    {
        return arr[size / 2];
    }
}

void StatTools::stemAndLeafPlot(const long long *arr, int size)
{
    std::cout << "Stem and Leaf Plot:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] / 10 << " | " << arr[i] % 10 << std::endl;
    }
}

void StatTools::barChart(const long long *arr, int size)
{
    std::cout << "Bar Chart:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ": ";
        for (int j = 0; j < arr[i]; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
