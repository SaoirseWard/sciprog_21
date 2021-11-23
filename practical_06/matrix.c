#include <stdio.h>

void printArray( int len, int wid, int ar[][wid]){
	for(int i=0;i<len;i++){
		for(int j=0;j<wid;j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int n=5;
	int p=3;
	int q=4;

	int A[n][p];
	int B[p][q];
	int C[n][q];

	for(int i=0; i<n; i++){
		for(int j=0; j<q; j++){
			C[i][j]=0;
		}
	}

	
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			A[i][j]=i+j;
		}
	}

	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			B[i][j]=i-j;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			C[i][j]=0;
		}
	}

	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
				sum+= A[i][k]*B[k][j];
			}
			C[i][j]=sum;
			sum=0;
		}
	}
	printArray(n,p,A);
	printArray(p,q,B);
	printArray(n,q,C);
}


