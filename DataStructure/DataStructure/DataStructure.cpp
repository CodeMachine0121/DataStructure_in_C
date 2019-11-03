// DataStructure.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include<stdlib.h>
#include "DataStructure.h"

#define MAX_SIZE 15

void main() {
	
	int square[MAX_SIZE][MAX_SIZE];
	int i, j, row, column; //索引
	int count; //計數值
	int size; //方陣大小

	printf("Enter the size of the square: ");
	scanf_s("%d", &size);
	if (size < 1 || (size > MAX_SIZE + 1)) {  //檢查錯誤的輸入
		fprintf(stderr, "Error! Size is out of range\n");
		exit(EXIT_FAILURE);
	}

	if (!(size % 2)) {
		fprintf(stderr, "Error! Size is even");
		exit(EXIT_FAILURE);
	}
	// init the square
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			square[i][j] = 0;
		}
	}
	
	square[0][(size - 1) / 2] = 1; // 第一列中間位置
	// i和j是目前位置 
	i = 0;
	j = (size - 1) / 2;

	for (count = 2; count < size * size; count++) {
		//printf("count:%d, i:%d, j:%d\n", count, i, j);
		row = (i - 1 < 0) ? (size - 1) : (i - 1); // 上面
		column = (j - 1 < 0) ? (size - 1) : (j - 1);//左邊
		printf("square[%d][%d]: %d\n", row, column, square[row][column]);
		if (square[row][column]) { //下面
			i = (++i) % size;
		}
		else { // square is unoccupied
			i = row;
			//j = (j - 1 < 0) ? (size - 1) : --j;
			j = column;
		}
		square[i][j] = count;
	}
	
	//輸出 魔術方陣
	printf("Magic Square of size %d :\n\n", size);
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	

}