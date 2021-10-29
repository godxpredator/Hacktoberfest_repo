#include<stdio.h>
void main(){
    int rows , cols;
    printf("Enter Rows and Colomns for both Matrices:-\n");
    scanf("%d%d",&rows,&cols);
    //rows are horizontal columns are vertical.
    int arr1[rows][cols],arr2[rows][cols];
    printf("Enter the elements of your first array:-\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of your second array:-\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    //sum of matrices
    int sum[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum[i][j]=(arr1[i][j]+arr2[i][j]);
        }
    }
    printf("Sum of the matrices is:-\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
