/// problem: input numbers untill you input -1 and show that all input numbers are even or not?


#include<stdio.h>
int main()
{
    int found_odd=0,n;
    while(1)
    {
        scanf("%d",&n);
         if(n ==-1)
        {
            break;
        }
        if(n%2!=0)
        {
            found_odd=1;
        }

    }
    if(found_odd == 1)
    {
        printf("no");
    }
    else
    {
        printf("Even");
    }

    return 0;
}
