#include <stdio.h>
int main()
{
     int mat1[3][2], mat2[3][2], sum[3][2];
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
        printf("Enter the %d %d element of the first matrix : ",i,j);
        scanf("%d",&mat1[i][j]);
        }
     }
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
        printf("Enter the %d %d element of the second matrix : ", i, j);
        scanf("%d", &mat2[i][j]);
        }
     }
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
        sum[i][j] = mat1[i][j] + mat2[i][j];
        printf("\t%d", sum[i][j]);
        }
     printf("\n");
     }
    return 0;
}