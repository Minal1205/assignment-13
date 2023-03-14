#include <stdio.h>
// recursive function to calculate sum of first N natural numbers

int sum(int n)
{
    if (n == 0)
    {
        return;
    }
    return n + sum(n - 1);
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int s = sum(num);
    printf("Sum of first %d natural numbers is = %d", num, s);

    return 0;
}