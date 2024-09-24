#include<stdio.h>
int main(){

char ch;

printf("Enter a character:");
scanf("%c",&ch);

//using ternary operator to check if the character is digit
isdigit(ch)? printf("'%c' is a digit.\n", ch): printf("'%c'is not a digit.\n",ch);


int num1,num2,smallest;

printf("Enter num1:");
scanf("%d",&num1);

printf("Enter num2:");
scanf("%d",&num2);

smallest=(num1<num2)? num1:num2;
printf("The smallest number is:%d\n", smallest);























return 0;
}
