#include <stdio.h>

int recGCD(int a, int b)
{
	/*recursiveVersion*/
	if(b==0){
		return a;
	}
	else
	{
		return recGCD(b, (a%b));
	}
}

int itGCD(int a, int b){
	/*Iterative version*/
	int temp=0;
	while(b != 0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	
}

int main(){
	/*declare variable*/
	int a=0;
	int b=0;
	/*get numbers from user*/
	printf("Input two numbers");
	scanf("%d", &a);
	scanf("%d", &b);
	//print answers
	printf("Iterative : %d \n",itGCD(a,b));
	printf("Recursive : %d \n",recGCD(a,b));
}