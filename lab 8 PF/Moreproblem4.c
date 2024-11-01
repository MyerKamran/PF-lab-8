#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k;

    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:");
    for(i= 0;i<3;i++) {
        for(j= 0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                result[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResult matrix is:\n");
    for(i =0;i<3;i++){
        for(j =0;j<3;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
