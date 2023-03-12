#include <stdio.h>

float total = 0.0;
short count = 0;

short taxPercent = 6;

float addWithTax(float);

int main()
{
    float val;
    printf("Price of item: ");
    while (scanf("%f", &val) == 1)
    {
        printf("Total so far: %.2f\n", addWithTax(val));
        printf("Price of item: ");
    }

    printf("\nFinal total: %.2f\n", total);
    printf("Number of items: %hi\n", count);
    return 0;
}

float addWithTax(float f)
{

    float taxRate = 1 + taxPercent / 100.0;
    total = total + (f * taxRate);
    count = count + 1;

    return total;
}
