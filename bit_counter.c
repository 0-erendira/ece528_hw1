#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    long long input;
    uint32_t n;
    int count = 0;

    printf("Enter an unsigned 32-bit integer: ");

    if (scanf("%lld", &input) != 1 ||
        input < 0 ||
        (unsigned long long)input > UINT32_MAX)
    {
        printf("Invalid input. Please enter a value from 0 to 4294967295.\n");
        return 1;
    }

    n = (uint32_t)input;

    while (n != 0)
    {
        n &= (n - 1);
        count++;
    }

    printf("Name: Erendira Miranda  HW1 \n");
    printf("Number of set bits: %d\n", count);

    return 0;
}