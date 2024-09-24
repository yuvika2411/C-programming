#include<stdio.h>
#include<math.h>

int main(){
  int a=5,b=3;
  int sum = a+b;
  int remainder = a%b;
  int power = pow(a,b);
  printf("Sum is :%d\n", sum);
  printf("Remainder is:%d\n", remainder);
  printf("Power is :%d\n", power);

  printf("%0.2f\n", 2/3.0);

  float d= (float) 2;
  printf("%0.1f\n",d);

    int x= 5+2/2*3;
    printf("%d\n",x);

    printf("%d\n", 4==4);

        printf("%d\n", (5>3) && (4>3));


  int z=1;
  int y =4;
  z*=y;
  printf("%d\n",z);


         int p;
         //even->1
         //odd->0
        printf("enter p");
         scanf("%d", &p);
         printf("%d\n", p%2==0);

         int powar= pow(8,8);

         printf("%d\n", powar);

int n;

    printf("enter n");
    scanf("%d",&n);

    printf("%d\n",n>10 && n<100);




    }







return 0;}
