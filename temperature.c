#include <stdio.h>

int main()
{
    int temperature[7];
    int highest, lowest;
    int sum = 0;
    int hotDays = 0;
    float average;

    // Enter temperatures
    for (int i = 0; i < 7; i++)
    {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &temperature[i]);
    }

    // Assume first temperature is highest and lowest
    highest = temperature[0];
    lowest = temperature[0];

    // Find highest, lowest and hot days
    for (int i = 0; i < 7; i++)
    {
        if (temperature[i] > highest)
        {
            highest = temperature[i];
        }

        if (temperature[i] < lowest)
        {
            lowest = temperature[i];
        }

        sum = sum + temperature[i];

        if (temperature[i] > 35)
        {
            hotDays++;
        }
    }

    // Calculate average
    average = sum / 7.0;

    // Display report
    printf("\n-------- WEEKLY WEATHER REPORT --------\n");

    printf("Highest Temperature : %d°C\n", highest);
    printf("Lowest Temperature  : %d°C\n", lowest);
    printf("Average Temperature : %.2f°C\n", average);
    printf("Days Above 35°C     : %d\n", hotDays);

    printf("----------------------------------------\n");

    return 0;
}