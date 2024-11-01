#include<stdio.h>
int main(){
    int start,end;
    printf("Enter the start and end of the range");
    scanf("%d %d",start,end);
    int i,j,prime;
    printf("Prime numbers are:");
    for(i=start;i<=end;i++){
        if(i==1){
            prime=1;
            printf("1");
            continue;
        }
        for(j=2;j<i;j++){
            if(i%j!=0){
                prime= i;
            }
        }
        printf("%d", prime);
    }
    return 0;
}