#include <stdio.h>
int main()
{
    int i,n,s,b;
    printf("the ending range:");
    scanf("%d",&n);
    s=0;
    b=0;
    for(i=0;i<=n;i++)
    if(i%2==0)
    s=s+i;
    else
    b=b+i;
    printf("sum of all odd number is %d\n",n);
    printf("sum of all even number is %d",s);
    return 0;
}