#include <stdio.h>

int main()
{
    float longitute;
    float latitude;
    char info[80];
    int started = 0;

    puts("data =[");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitute, info) == 3) /*[^\n] = "Give me every character up to the end of the line"*/
    {
        if (started)
            printf(", \n");
        else
            started = 1;
        if ((latitude < -90) || (latitude > 90))
        {
            fprintf(stderr, "Invalid latitude: %f\n", latitude);
            return 2;
        }
        if ((longitute < -180) || (longitute > 180))
        {
            fprintf(stderr, "Invalid longitude: %f\n", longitute);
            return 2;
        }
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitute, info);
    }
    puts("\n]");
    return 0;
}
