#include<stdio.h>
#include<stdlib.h>

#define MALLOC(p,s)\
if (!( (p)=(int*)malloc(s) )){\
	fprintf(stderr,"Insufficient memory");\
	exit(EXIT_FAILURE);\
}

int main(void){
	int i,n,*list;
	printf("Enter the number of numbers to generate: ");
	scanf("%d",n);
	if(n<1){
		fprintf(stderr,"Improper value of n\n");
		exit(EXIT_FAILURE);
	}
	MALLOC(list,n*sizeof(int));
}
