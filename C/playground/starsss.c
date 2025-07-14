#include <stdio.h>
int star(int n);
int star(int n){
    int totalstars=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3*i-2;j++){
            printf("*");
            totalstars++;
        }
        printf("\n");
    }
    return totalstars;
}
int main(){
    int n;
    printf("How many lines do you want to print: ");
    scanf("%d",&n);
    int total=star(n);
    printf("Total stars printed: %d",total);
    return 0;
}