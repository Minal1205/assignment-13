#include <stdio.h>
// recursive function to calculate HCF of two numbers
int HCF(int x, int y)
{
    if (y != 0)
    {
        return HCF(y, x % y);
    }
    else
        return x;
}
int main()
{
    int a, b;
    printf("Enter two nummbers\n");
    scanf("%d %d", &a, &b);
    int k = HCF(a, b);
    printf("HCF of %d and %d is %d\n", a, b, k);

    return 0;
}