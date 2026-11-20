#include <stdio.h>

struct Weather
{
    char city[50];
    float temperature;
    float humidity;
    float rainfall;
};

int main()
{
    struct Weather w[10];
    int n, i, highest = 0, lowest = 0;
    float total = 0, average;

    printf("===== WEATHER MONITORING SYSTEM =====\n");

    printf("Enter number of cities (1-10): ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("Invalid number of cities!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter city name: ");
        scanf(" %[^\n]", w[i].city);

        printf("Enter temperature: ");
        scanf("%f", &w[i].temperature);

        printf("Enter humidity: ");
        scanf("%f", &w[i].humidity);

        printf("Enter rainfall (in mm): ");
        scanf("%f", &w[i].rainfall);

        if(w[i].humidity < 0 || w[i].humidity > 100 ||
           w[i].rainfall < 0)
        {
            printf("Invalid weather data!");
            return 0;
        }

        total += w[i].temperature;

        if(w[i].temperature > w[highest].temperature)
            highest = i;

        if(w[i].temperature < w[lowest].temperature)
            lowest = i;
    }

    average = total / n;

    printf("\n===== WEATHER REPORT =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nCity: %s", w[i].city);
        printf("\nTemperature: %.2f C", w[i].temperature);
        printf("\nHumidity: %.2f%%", w[i].humidity);
        printf("\nRainfall: %.2f mm\n", w[i].rainfall);
    }

    printf("\nAverage Temperature: %.2f C", average);

    printf("\nHottest City: %s", w[highest].city);
    printf("\nColdest City: %s", w[lowest].city);

    return 0;
}