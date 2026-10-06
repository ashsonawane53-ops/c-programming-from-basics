#include <stdio.h>

int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);

    switch(a)
    {
        case 1 :
            printf(" you entered 1\n");
            break;
        case 2 :
            printf(" you entered 2\n");
            break;
        case 3 :
            printf(" you entered 3\n");
            break;
        case 4 :
            printf(" you entered 4\n");
            break;
        case 5 :
            printf(" you entered 5\n");
            break;
        case 6 :
            printf(" you entered 6\n");
            break;
        case 7 :
            printf(" you entered 7\n");
            break;
        case 8 :
            printf(" you entered 8\n");
            break;
        default:
            printf("nothing matched");
    }
    return 0;
}