#include<stdio.h>
int main(){
    int n;

do {
        printf("enter number:");
    scanf("%d",&n);


    if(n%7 !=0){
        break;
    }
    printf("Its a multiple of 7\n");

} while(1);

printf("not a multiple of 7 ");
return 0;



}

