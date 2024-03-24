#include<stdio.h>
 main()
{
    int i, fact=1;
    printf("enter an integer");
    scanf("%d",&i);
    while(i>0)
    {
    fact *=i;
    i--;
    }
    printf("factorial is %d",fact);

 return 0;
}