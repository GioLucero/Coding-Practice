#include <stdio.h>

int main() {

    int d, i;
    int high[5];
    int low[5];
    int accept = 1;
    int sum;
    int min, max;
    int minTemp, maxTemp;
    int dayAvg;
    int lowAvg, highAvg;

    double avgTemp;
    

    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    printf("Please enter the number of days, between 3 and 10, inclusive: ");

    // while loop for day input  
    while (accept) {
        scanf("%d", &d);
        printf("\n");
        if (d < 3 || d > 10) {
            printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
        }
        else {
                accept = 0;
        }
    }

    // displays day temp input 
    for (i = 0; i < d; i++) {
        printf("Day %d - High: ", i + 1);
        // adding to high array
        scanf("%d", &high[i]);
        printf("Day %d - Low: ", i + 1);
        // adding to low array
        scanf("%d", &low[i]);
    } 
    printf("\nDay  Hi  Low\n");

    for (i = 0; i < d; i++) {
        printf("%-5d%-5d%-2d\n", i + 1, high[i], low[i]);
    }

    min = low[0];
    max = high[0];

    // for loop to iterate through array and find min and max day temperatures
    for (i = 0; i < d; i++) {
        // finding min
        if (min >= low[i]) {
            min = low[i];
            minTemp = i + 1;
        }
        // finding max
        if (max <= high[i]) {
            max = high[i];
            maxTemp = i + 1;
        }
    }

    printf("\nThe highest temperature was %d, on day %d\n", max, maxTemp);
    printf("The lowest temperature was %d, on day %d\n", min, minTemp);
    printf("\n");


    do {
        // the number must be between 1 and 5
        printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        scanf("%d", &dayAvg);
        printf("\n");
        while (dayAvg > d || dayAvg == 0) {
            printf("Invalid entry, please enter a number between 1 and 5, inclusive: ");
            scanf("%d", &dayAvg);
            printf("\n");
        }
        // Calc the average temperature of the day if input is valid 
        if (dayAvg > 0) {
            lowAvg = 0;
            highAvg = 0;
            for (i = 0; i < dayAvg; i++) {
                // must add low and high average and divide by the day average multipled by 2 (low and high)
                lowAvg += low[i];
                highAvg += high[i];
                avgTemp = (double)(lowAvg + highAvg) / (dayAvg * 2);
            }
        }
        // display the overall average of temperature
        printf("The average temperature up to day %d is: %.2lf\n", d, avgTemp);
        printf("\n");
    } while (dayAvg <= d && dayAvg > 0);

    printf("Goodbye!");
    return 0;
}