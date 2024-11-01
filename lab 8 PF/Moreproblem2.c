#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0){
        n=n-1;
    }
    
    for(i = n; i > 0; i -= 2) {  // Only odd numbers
        for(j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
