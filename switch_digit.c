#include<stdio.h>
int main()
{
    int digit;

    printf("Enter a digit: ");
    scanf("%d",& digit);

    switch(digit)
    {
    case 0:
        printf("Zero\n");
        break;

    case 1:
        printf("one\n");
        break;

    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;

    case 4:
        printf("four\n");
        break;

    default:
        printf("Not a valid digit");

    }

}
