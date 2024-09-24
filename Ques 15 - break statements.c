#include<stdio.h>
int main(){
    int n;

do {
        printf("enter number:");
    scanf("%d",&n);

    if(n%2 !=0){
        break;
    }
    printf("Its an even number\n");
} while(1);

printf("not an even number\n");

return 0;



}
