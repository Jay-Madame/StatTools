#include <iostream>
#include <string>
#include "StatTools.cpp"

int main()
{
    long long *numbers = nullptr;
    int num, size;
    size = 5;

    numbers = new long long[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> num;
        numbers[i] = num;
    }

    // testing out the cutie stats:
    std::cout << "Max: " << StatTools::max(numbers, size) << std::endl;
    std::cout << "Min: " << StatTools::min(numbers, size) << std::endl;
    std::cout << "Mean: " << StatTools::mean(numbers, size) << std::endl;
    std::cout << "Mode: " << StatTools::mode(numbers, size) << std::endl;
    std::cout << "Median: " << StatTools::median(numbers, size) << std::endl
              << std::endl;

    // printing the cutie little stats via bargraphs (of astericks)
    std::cout << "Stem and leaf plot: ";
    StatTools::stemAndLeafPlot(numbers, size);
    std::cout << "\nBar graph: ";
    StatTools::barChart(numbers, size);

    delete[] numbers;
    return 0;
}
