#include<stdio.h>
int main(){

int x=2;

if(x=1)// this have replaced the value of x i.e 2 to 1
{
    printf("x is equal to 1\n");
}
else{
    printf("x is not equal to 1\n");
}

char ch;
printf("Enter Characteer:\n");
scanf("%c", &ch);

if (ch>='a'){
    printf("Character is in lower case\n");
}
else if(ch>='A')
{
    printf("Character is in upper case\n");
}
return 0;

}
