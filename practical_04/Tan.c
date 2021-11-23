#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double degToRad(int a){
	
	return (M_PI/180) *a;
}

double radTan[13];

double trap(int n){
	double a = degToRad(0);
	double b = degToRad(60);
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
	double rad=0;
	for(int i=0; i<=12; i++)
	{
		rad=degToRad(i*5);
		radTan[i]=tan(rad);
		printf("%g, \n",radTan[i]);
	}  
	printf("%g",trap(12));
	
}	