#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* allocatearray(int x){
	int *array;
	array=(int*) malloc(x*sizeof(int));
	return array;
}

void fillWithOnes(int *array, int size){
	int i;
	for(i=0; i<size;i++){
		array[i]=1;
	}
}


void printarray(int *array, int size){
	for(int i=0;i<size; i++)
	{
		printf("%d \n",array[i]);
	}
}

void freeMemory(int *array){
	free(array);
}



int main(){
	int n;
	scanf("%d",&n);
	int *array=allocatearray(n);
	fillWithOnes(array,n);
	printarray(array,n);
	freeMemory(array);
}