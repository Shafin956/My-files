#include<stdio.h>
int addfunction(int a,int b){
int result;
result=a+b;
return result;


}
int main()
{
    int a=50;
    int b=20;
    int resultnumber=addfunction(a,b);
    printf("%d +%d =%d\n\n",a,b,resultnumber);
    return 5;


}
