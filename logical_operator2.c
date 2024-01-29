#include<stdio.h>
int main()
{
    int num1, num2, num3;
    
    printf("Enter  number 1:");
    scanf("%d", &num1);

    printf("Enter  number 2 :");
    scanf("%d", &num2);

    printf("Enter  number 3 :");
    scanf("%d", &num3);
    
    if (num1>num2 && num1>num3)
        printf("Num1 is big");

    else if (num2>num1 && num2>num3)
        printf("Num2 is big");


    else if (num3>num1 && num3>num2)
        printf("Num3 is big");

    else
        printf("two or three numbers are equal");

}
