#include<stdio.h>
    int main(){
    int marks;
        printf("enter marks:");
        scanf("%d", &marks);


        if(marks>90)
                {
                    printf("A1\n");
                }
        else if (80<marks && marks<90)
                {
                    printf("A2\n");
                }
        else if (70<marks && marks<80)
                 {
                    printf("B1\n");
                 }
        else if(60<marks && marks<70)
                {
                    printf("B2\n");
                }
       else if (50<marks && marks<60)
                {
                    printf("C1\n");
                }
       else if (35<marks && marks<50)
                {
                    printf("D\n");
                }
       else
                {
                    printf("Fail\n");
                }

return 0;
}
