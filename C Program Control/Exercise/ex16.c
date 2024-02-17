//  (World Population Growth) World population has grown considerably over the centuries. Continued growth could eventually challenge the limits of breathable air, drinkable water, arable cropland and other limited resources. There’s evidence that growth has been slowing in recent years and that world population could peak some time this century, then start to decline. For this exercise, research world population growth issues online. Be sure to investigate various viewpoints. Get estimates for the current world population and its growth rate (the percentage by which it’s likely to increase this year). Write a program that calculates world population growth each year for the next 75 years, using the simplifying assumption that the current growth rate will stay constant. Print the results in a table. The first column should display the year from year 1 to year 75. The second column should display the anticipated world population at the end of that year. The third column should display the numerical increase in the world population that would occur that year. Using your results, determine the year in which the population would be double what it is today, if this year’s growth rate were to persist.

#include <stdio.h>

int main()
{
    double currentPopulation = 7.8; // in billions
    double growthRate = 1.05;       // percentage
    int years = 75;
    double doublePopulation = currentPopulation * 2;
    int yearOfDoubling = 0;

    printf("Year\tPopulation\tIncrease\n");
    printf("---------------------------------------\n");

    for (int year = 1; year <= years; year++)
    {
        double increase = currentPopulation * (growthRate / 100);
        currentPopulation += increase;

        if (currentPopulation <= doublePopulation && yearOfDoubling == 0)
        {
            yearOfDoubling = year;
        }

        printf("%d\t%.2f\t\t%.2f\n", year, currentPopulation, increase);
    }

    if (yearOfDoubling != 0)
    {
        printf("\nThe population is expected to double from its original size in year %d.\n", yearOfDoubling);
    }
    else
    {
        printf("\nThe population will not double within the next 75 years at the current growth rate.\n");
    }

    return 0;
}
