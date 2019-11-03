#include<stdio.h>
#include<stdlib.h>
#define Max_Size 100
int list[Max_Size];

void print1(int*,int);

int main(void)
{
	int i;
	for(i=0;i<Max_Size;i++){
		list[i]=i;
	}
	print1(list,Max_Size);
} 

void print1(int* ptr,int rows){
	int i;
	printf("Address Contents\n");
	for(i=0;i<rows;i++){
		printf("%8u%5d\n",ptr+i,*(ptr+i));
	}
	printf("\n");
}
