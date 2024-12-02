#include <stdio.h>
int main()
{
     int mat[2][2],mat1[2][2],product[2][2]={0};
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter the %d %d element of the first matrix : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
     }
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter the %d %d element of the second matrix : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
     }
     printf("First matrix : \n");
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
     }
      printf("Second matrix : \n");
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("\t%d",mat1[i][j]);
        }
        printf("\n");
     }
     printf("\n");
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k<2;k++){
                product[i][j]+=mat[i][k]*mat1[k][j];
            }
        }
     }
      printf("Product matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\t%d", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>

int main() {
    int mat[2][2], mat1[2][2], product[2][2] = {0}; // Initialize product matrix to zero

    // Input first matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter the %d %d element of the first matrix: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    // Input second matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter the %d %d element of the second matrix: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Display the first matrix
    printf("First matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("Second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\t%d", mat1[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += mat[i][k] * mat1[k][j]; // Calculate the product
            }
        }
    }

    // Display the product matrix
    printf("Product matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\t%d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/