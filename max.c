#include<stdio.h>
int main()
{
    int a,b,c;
    printf("输入两个数：");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        c=a;
        a=b;
        b=c;
    }
    while(a%b!=0)
    {
         c=a%b;
         a=b;
         b=c;
    }
    printf("%d\n",b);
}  
