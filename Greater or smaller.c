#include<stdio.h>
int main()
    {
        int a,b;
        printf("Enter the first number,a:");
        scanf("%d",&a);
        printf("Enter the second number,b:");
        scanf("%d",&b);
        if(a>b)
            {
              printf("given number is a greater number:%d\n",a);
            }
        else if(a<b)
            {
            printf("Given number is a smallest number:%d\n",b);
            }
        else
            {
            printf("the given both numbers are equal\n");
            }

    }
