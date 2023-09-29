#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/fibo.h"


int main(int argc, char* argv[]){
	if(argc < 2){
		printf("No parameter was given, exiting...\n");
		return 1;
	}
	int number = atoi(argv[1]);
	if ((0 > number) || (number > 46)){
		printf("Number outside allowed range.\n");
		printf("Must be a value between 0 and 46\n");
		return 1;
	}
	printf("The input given is: %d\n", number);
	printf("The %dth fiboncci number is %d\n", number, fibo(number));
	return 0;
}

