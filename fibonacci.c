#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long previous = 0;
    unsigned long long current = 1;
    unsigned long long next;

    printf("Enter an integer N where N >= 2: ");

    if (scanf("%d", &n) != 1 || n < 2)
    {
        printf("Invalid input. Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        next = previous + current;
        previous = current;
        current = next;
    }

    printf("Name: Erendira Miranda\n");
    printf("The %dth Fibonacci number is: %llu\n", n, current);

    return 1;
}