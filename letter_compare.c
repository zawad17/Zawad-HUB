#include<stdio.h>
int main()
{
    char ch ;
    
    printf("Enter any letter : ");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
        printf("small Letter");
        
    else if (ch>='A' && ch <='Z')
        printf("Capital letter");

    else
        printf("Not a letter");



}
