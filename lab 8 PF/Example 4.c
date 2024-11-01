#include<stdio.h>
int main(){
	int a[2][2]={{2,5},{5,7}};
	int b[2][2]={{3,6},{1,3}};
	int result[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d \t",result[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}