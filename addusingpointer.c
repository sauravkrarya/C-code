#include<stdio.h>
int add(int *,int *);
int main()
{
    int a,b;
    int s;
    printf("enter two number:");
    scanf("%d %d", &a,&b);
    s=add(&a,&b);
    printf("sum=%d",s);
    return 0;
}