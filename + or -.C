#include <stdio.h>
int main()
{
    printf("enter the number:");
    printf("enter the opration:");
    int a,b;
    char opt,add,sub,mul,div;
    scanf("%d %d %c",&a,&b,&opt);
    if(opt==add)
    {
        printf("a+b");
    }
    else if(opt ==sub)
    {
        printf(a-b);
    }
    else if(opt==mul)
    {
        printf(a*b);
    }
    else
    {
        printf(a/b);
    }
    return 0;

}
