#include <stdio.h>
#include<string.h>
int main()
{    int l=0;
     char a[100],b[100];
     puts("Enter a word: ");
     gets(a);
     puts(a);
     puts("Enter a word: ");
     gets(b);
     puts(b);
     l=strlen(b);
     printf("%d\n",l);
     strcat(a,b);
     puts(a);
    return 0;
}