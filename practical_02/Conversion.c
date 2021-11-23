#include <stdio.h>
#include <math.h>

int main (void){
  int i , inum,tmp,numdigits;
    float fnum;  
    char binnum[60];

    inum = 33554431;
    fnum=(float)inum;
    i=0;tmp=inum;
    while(tmp>0){
      sprintf(&binnum[i],"%1d",tmp%2);
      tmp=tmp/2;
      i++;
    }

    binnum[i]='\0';

    numdigits=ceil(log10(abs(inum)));
    printf("The number of digits is %dn",numdigits);

    printf("inum=%d, fnum=%f, inum in binary=%s\n",
	   inum,fnum,binnum);
}
