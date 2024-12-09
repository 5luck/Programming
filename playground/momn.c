#include <stdio.h>
int main()
{
     int m1[2][2],m2[2][2],m3[2][2]={0};
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nEnter the %d %d element of the matrix: ",i,j);
            scanf("%d",&m1[i][j]);
        }
     }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nEnter the %d %d element of the matrix: ",i,j);
            scanf("%d",&m2[i][j]);
        }
     }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
           m3[i][j]+=m1[i][k]*m2[k][j];
        }
      }
     }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\t%d",m3[i][j]);
        }
        printf("\n");
     }
    return 0;
}