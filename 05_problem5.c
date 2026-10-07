// write a program to determine whether a character entered by the user is lowercase or not 

#include <stdio.h>

int main(){
    char ch ;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch >= 97 && ch <= 122)
    {
        printf("the character is lowercase");
    }
    else{
        printf("the character is uppercase");
    }
    return 0;
}