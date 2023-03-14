#include<stdio.h>
//a recursive function to calculate factorial of a given number

int fact(int n){
    if(n==1){
        return;
    }
    return n*fact(n-1);
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    int f=fact(num);
    printf("Factorial of %d is %d",num,f);
    
    return 0;
}