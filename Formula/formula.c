#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "nCr.h"
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc,const char * argv[]){

struct timeval start,end;

int i,n;
int temp = 0;
n=atoi(argv[1]);//input into string
if(n>12){
	printf("Overflow number must be below 13\n");
}
else if(argv[1][0]=='-'&&argv[1][1]=='h'){ 	//help flag		
	printf("Usage: formula <positive integer>\n");
}
else if(argv[1][0]=='-'){	//user tries negative number
printf("Error type ./formula -h for help\n");
}
else{
	printf("1");	//starting 1
	gettimeofday(&start,NULL); //time start
	for (i = 1; i <= n; i++) {
        	printf("%s", " + ");	 //+
		temp = nCr(n, i);	//nCr
		printf("%d%s", temp, "*x");  //ncR*x

        if (i != 1){
        	printf("%s%d", "^", i); //^
        }
	}

	gettimeofday(&end,NULL); //time end
	printf("\ntime required %ld microseconds\n",((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));	//print time
}
return 0;
}
