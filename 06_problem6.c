//write a program to find the greatest of four numbers entered by the users.

#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter the value of :\n a\n b\n c\n d");
    scanf("%d %d %d %d",&a, &b, &c, &d);
    if(a>b && a>c && a>d)
    {
        printf("gretest number is %d",a);
    }
     else if(b>a && b>c && b>d)
    {
        printf("gretest number is %d",b);
    }
     else if(c>a && c>b && c>d)
    {
        printf("gretest number is %d",c);
    }
     else if(d>a && d>b && d>c)
    {
        printf("gretest number is %d",d);
    }
    return 0;
}