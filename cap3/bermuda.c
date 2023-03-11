#include <stdio.h>

int main()
{
    float longitute;
    float latitude;
    char info[80];

    while (scanf("%f, %f, %79[^\n]", &latitude, &longitute, info) == 3)
    {
        if ((latitude > 26) && (latitude < 34))
            if ((longitute > -76) && (longitute < -64))
                printf("%f, %f, %s\n", latitude, longitute, info);
    }

    return 0;
}
