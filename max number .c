
#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
        printf("%d is Maximum",a);
    else if (b>a && b>c && b>d)
        printf("%d is Maximum",b);
    else if (c>a && c>b && c>d)
        printf("%d is Maximum",c);
    else
        printf("%d is Maximum",d);
        return 0;
}
