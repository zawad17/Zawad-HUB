#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);

    if(ch=='a'||ch=='e'||ch =='i'||ch=='o'||ch=='u') //In condition must use ' '
        printf("Vowel");

    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");

    else
        printf("Consotant");
    return 0;
}
