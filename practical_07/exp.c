#include <stdio.h>

int fact(int n){
	int tot=1;
	for(int i=1;i<=n;i++){
		tot=tot*i;

	}

	return tot;
}

double numericalE(int n){
	double sum=0;
	double f=0;
	for(int i=0; i<=n; i++){
	/*since x=1 I am not putting it to the power to save time*/
	/*Would use pow from math library if it were needed*/
	    f=fact(i);
		sum+=(1/f);
		printf("%g\n",sum);
	}
	
	return sum;
}
int main(){
	int n=0;
	printf("Input order of polynomial");
	scanf("%d", &n);


	printf("exp : %g", numericalE(n));
}