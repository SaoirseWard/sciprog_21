#include <stdio.h>
#include <math.h>

double trap(int n){
	//trapazoidal rule done in its own function so it 
	//can be reused
	double a = 0;
	double b = M_PI/3;
	double h = (b-a)/n;
	double sum=0;
	double x=0;
	for(int i=1;i<n;i++){
		x=a+(i*h);
		sum=sum+tan(x);
	}
	return ((h/2)*(tan(a)+tan(b)+2*sum));
}

int main(){
	printf("Trapazoidal rule: %g\n", trap(11));
	printf("Log(2): %g", log(2));
}