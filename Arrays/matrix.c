#include <stdio.h>
int main()
{
     int mat[2][3]={{2,3,6},{3,4,5}};
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
     }
    return 0;
}