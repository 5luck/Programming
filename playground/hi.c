#include<stdio.h>
#include<string.h>
int main(){
    int x;int y;int z;
    char c[100],s[200];
    gets(c,s);
    printf("You entered \"%s\" /& %s",c,s);
    x=strlen(c);
    printf("\n%d",strlen(c));
    return 0;
}