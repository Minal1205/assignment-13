#include <stdio.h>
// recursive function to calculate sum of first N odd natural numbers

int oddsum(int n)
{
    if (n == 1)
    {
        return;
    }

    
    return n + oddsum(n - 2);
    }

int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int num1=2*num-1;
    int s = oddsum(num1);
    printf("Sum of first %d odd natural numbers is = %d", num, s);

    return 0;
}