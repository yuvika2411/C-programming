#include<stdio.h>
int main()
{
    char ch ;
    printf("enter alphabet:");
    scanf("%c",&ch);


    if (ch>='A' && ch<='Z'){
        printf("Alphabet is in upper case");
    }
    else {
        printf("Alphabet is in lower case");
    }


return 0;

}
