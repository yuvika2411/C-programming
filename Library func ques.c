#include<stdio.h>
int calculateArea(int side){
return side*side;
}
int main(){
int side;

printf("Enter side of square:");
scanf("%d",&side);

int area= calculateArea(side);

printf("Area of Square is:%d\n",area);


}
