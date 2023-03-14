#include <stdio.h>
//to calculate the power of any number using recursion.
 
int power(int x,int y)
{
    if(y==0)
        return 1;
    else 
        return (x*power(x,y-1));
}
 
void main()
{
    int b,e;
    printf("Enter the base\n");
    scanf("%d",&b);
    printf("Enter the exponent\n");
    scanf("%d",&e);

    printf("Power(%d^%d) = %d\n",b,e,power(b,e));
}