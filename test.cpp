#include<stdio.h>
int main(void){

	int a[10][10];
	
	int i,j,count=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			a[i][j]=count++;
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
		
	
	printf("%d",a[-1][-1]);
	return 0;
	
}

