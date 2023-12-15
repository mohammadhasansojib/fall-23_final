#include <stdio.h>







int main() {

    int row1,col1;
    printf("enter the first maxtrix row and column: ");
    scanf("%d%d", &row1,&col1);

    int matrix1[row1][col1];

    printf("enter elements of first matrix: ");
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d", matrix1[i][j]);
        }
    }



    int row2,col2;
    printf("enter the second maxtrix row and column: ");
    scanf("%d%d", &row2,&col2);

    int matrix2[row2][col2];

    if(row1 == col2 && row2 == col1){
        printf("enter elements of second matrix: ");
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < col2; j++){
                scanf("%d", matrix2[i][j]);
            }
        }

        multiply();
    }else{
        printf("first matrix row and second matrix column must equal and vice versa.");
    }



    return 0;
}
