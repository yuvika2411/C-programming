#include<stdio.h>
int main(){

    int num1,num2;

    scanf("%d",&num1);
    scanf("%d",&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After swapping,first number is: %d\n",num1);
    printf("After swapping,second number is :%d\n",num2);

return 0;

}
