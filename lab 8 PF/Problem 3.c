#include<stdio.h>
int main(){
	int i,j,k;
	int sum=0;
	int a[2][3][3]={{{2,4,6},{5,8,3},{5,2,3}},{{1,2,0},{9,4,1},{5,7,4}}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum=sum+a[i][j][k];
				
			}
			
		}
		printf("%dpage sum is %d \n", i+1, sum);
		
	}
	return 0;
}