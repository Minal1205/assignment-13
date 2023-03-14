#include <stdio.h>
// recursive function to calculate sum of digits of a given number
int sum(int n)
{
    if (n == 0)
    {
        return;
    }
    return (n % 10 + sum(n / 10));
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int s = sum(num);
    printf("Sum of digits of number %d is %d\n", num, s);

    return 0;
}