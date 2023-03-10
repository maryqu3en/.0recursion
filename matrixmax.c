#include <stdio.h>
#include <stdbool.h>


int max(int a, int b){
	return (a > b) ? a : b;
}

int row_max(int row[], int size)
{
	if(size == 1) return row[0];
	else return max(row[size - 1], row_max(row, size - 1));
}

int matrix_max(int rows, int columns, int matrix[][columns])
{
	if(rows == 1) return row_max(matrix[0], columns);
	else return max(row_max(matrix[rows - 1], columns), matrix_max(rows - 1, columns, matrix));
}

int main(){
	int matrix[2][2] = {
						{1, 7},
						{10, 3}
	                   };
	                   
	printf("The max is %d\n", matrix_max(2, 2, matrix));
	return 0;
}