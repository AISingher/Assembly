#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int num[200];

int add(int a, int b){
	return a+b;
}

int computeFib(int a){
		
int tmp=0;

	if (num[a]==-1) { 		 		 		 		 		 		
	 if (a==0){
	 	num[a]=0;
	 }
	else if (a==1){
		num[a]=1;
	}	 		 		 		 		 		 		 		 		 		
	else{
		num[a]=computeFib(a-1) + computeFib(a-2);	
	}
	}

tmp=num[a];
return tmp;
}


int main(int argc, char** argv) {
	
int i=0;
int n=atoi(argv[1]);
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 			
	while (i<200){
		num[i]=-1;
		i++;
	}
	
printf("%i\n", computeFib(n));

return 0;
}
