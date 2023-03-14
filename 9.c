#include<stdio.h>
//to count the digits of a given number using recursion.

int count(int n){
    static int c=0;
    if(n>0){
        c++;
        count(n/10);
    }
    else
    return c;

}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    int k=count(num);
    printf("Number of digits in %d is %d",num,k);
    
    return 0;
}