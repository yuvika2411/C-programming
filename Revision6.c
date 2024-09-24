#include<stdio.h>

void Bonjour();
void Naaste();
//declaration/prototype

int main(){
    printf("Enter f for french & i for indian:");
    char ch;
    scanf("%c",&ch);

    if(ch=='i'){
        Namaste();
    }
    else if(ch=='f'){
         Bonjour();
    }
    //function call

 return 0;
}
 //function definition
 void Bonjour()
 {
printf("Bonjour");
 }
 void Namaste()
 {
  printf("Namaste");
 }

