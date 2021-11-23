#include <stdio.h>
#include <math.h>

double arctanh1(double x, double delta)
{
	int n=0;
	double prv=10000;
	double current=0;
	double num;
	double dem;

	while(prv-current>delta){
		prv=current;
		num=pow(x,(2*n+1));
		dem=2*n+1;
		current+=(num/dem);
		
		n++;
	}
	return current;
}

double arctanh2(double x)
{
	return ((log(1+x)-log(1-x))/2);
}

int main(){
	double ar1[180];
	double ar2[180];
	double delta;
	scanf("%d",&delta);
	double x=-0.9;
	int i=0;
	while(x<=0.9){
		ar1[i]=arctanh1(x,delta);
		ar2[i]=arctanh2(x);
		x+=0.01;
		i++;
	}
	for(int i=0;i<180;i++){
		printf("%g       %g\n",ar1[i],ar2[i]);
	}
	
}