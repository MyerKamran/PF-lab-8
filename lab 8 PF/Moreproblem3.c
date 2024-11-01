#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k, minR, saddle,colnum;

    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++) {
        minR = matrix[i][0];
        colnum = 0;
        
        for(j = 1; j < 3; j++) {
            if(matrix[i][j]<minR) {
                minR=matrix[i][j];
                colnum = j;
            }
        }
        
        saddle= 1;
        for(k = 0; k < 3; k++) {
            if(matrix[k][colnum] > minR) {
                saddle= 0;
                break;
            }
        }
        
        if(saddle == 1){
            printf("Saddle point  is: %d",  minR);
        }
    }
    return 0;
}
