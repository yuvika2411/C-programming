#include<stdio.h>


    void Namaste();
    void Bonjour();

    int main(){

        printf("Enter Nationality:");
        char ch;
        scanf("%c", &ch);
        if(ch =='indian'){
                Namaste();
        }
            else{
                Bonjour();
            }
        return 0;

    }

        void Namaste(){
        printf("Namaste\n");
        }

        void Bonjour(){
        printf("Bonjour\n");
        }








