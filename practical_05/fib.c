#include <stdio.h>
#include <math.h>

int main(){
	/*sets starting figures*/
	int Fn=0;
	int Fn1=1;
	int Fn2=0;
	int n=0;
	scanf("%d", &n);
	printf("%d, ",Fn);
	/*Computes fibonacci*/
	for(int i=1;i<n;i++){
		printf("%d, ",Fn);
		Fn=Fn1+Fn2;
		
		Fn2=Fn1;
		Fn1=Fn;
	}
}