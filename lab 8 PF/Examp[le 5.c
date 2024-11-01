#include<stdio.h>
int main(){
	int a[2][2][2]= {{{2,4},{4,7}},{{8,2},{5,4}}};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("%d", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}