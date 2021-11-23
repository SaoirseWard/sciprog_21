#include <stdio.h>

#include <stdlib.h>

#include "magic_square.h"
int readmatrix(int len,int **a, const char* filename)
{

    FILE *pf;
    pf = fopen (filename, "r");
    if (pf == NULL)
        return 0;
    int i;
    int j;
    for(i = 0; i < len; ++i)
    {
      for( j = 0; j < len; ++j){
            fscanf(pf, "%d", a[i][j]);
      }
    }


    fclose (pf); 
    return 1; 
}

int getlines(const char* filename){
	FILE *fp;
	fp=fopen(filename, "r");
	int ch_read;
	int count=0;
	while((ch_read = fgetc(fp))!=EOF){
		if(ch_read == '\n'){
			count++;
		}
	}
	fclose(fp);
	return count;
}

int main(){
	int n;
	printf("Enter the square size\n");
	scanf("%d", &n);
	int i;
	int ** magicSquare= malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		magicSquare[i]= malloc(n * sizeof(int));
	}
	int j;
	
	for(i=0;i<n;i++){
		printf("Enter the elements in row %d, separated by line breaks:\n",i+1);
		for(j=0;j<n;j++){
				
			scanf("%d",&magicSquare[i][j]);
		}
	}
	
	printf("The square %s magic\n", isMagicSquare(magicSquare,n)?"is":"is NOT");
	for(i=0;i<n;i++){
		free(magicSquare[i]);
	}
	free(magicSquare);
	//;
	int ** fileSquare= malloc(getlines("test.txt")*sizeof(int));
	
	
	readmatrix(getlines("test.txt"),fileSquare, "test.txt");
	printf("The file square %s magic\n", isMagicSquare(fileSquare,3)?"is":"is NOT");
}

