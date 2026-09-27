#include <stdio.h>

int main(void)
{
    int num;
    int abs_val;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1)
    {
        printf("invladi input. Please enter a valid number.\n");
        return 1;
    }

    abs_val = abs(num);

    if(num > 0)
    {
        printf("the number is positive.\n");
    }else if(num<0)
    {
        printf("the number is negative.\n");
    }else
    {
        printf("the number is zero.\n");
    }

    printf("The absolute value of the number is: %d\n", abs_val);
    return 0;
    
}