#include<stdio.h>
int main(){

    int n;
    printf("enter n\n");
    scanf("%d", &n);

    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--)
        {
        sum+=i;
        printf("%d\n", j);
        }
            printf("Sum is: %d\n", sum);

            return 0;

}

