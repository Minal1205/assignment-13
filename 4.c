#include <stdio.h>
#include<math.h>
// recursive function to calculate sum of squares of first n natural numbers

int sqsum(int n)
{
    if (n == 0)
    {
        return;
    }
    int square=n*n;
    return square + sqsum(n - 1);
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int s = sqsum(num);
    printf("Sum of squares of first %d natural numbers is = %d", num, s);

    return 0;
}