#include <stdio.h>
#include <stdlib.h>

unsigned int x = 2100000061;
char * y = &x;
int i;

int main(){
	printf("%x\n\n",x);
	for(i=sizeof(int)-1;i>=0;i--){
		printf("original hex: %hhx\n",y[i]);//or *(y+i)
		y[i]++;//or *(y + i)+=1
		printf("increment 1: %x and %ld\n",x,x);
		y[i] += 16;//or *(y + i)+=16
		printf("increment 16: %x and %ld\n\n",x,x);
	}
	return 0;
}
