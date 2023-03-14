#include <stdio.h>
// recursive function to calculate sum of first N even natural numbers

int evensum(int n)
{
    if (n == 0)
    {
        return;
    }

    
    return n + evensum(n - 2);
    }

int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int num1=2*num;
    int s = evensum(num1);
    printf("Sum of first %d even natural numbers is = %d", num, s);

    return 0;
}