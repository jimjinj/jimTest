#include "stdio.h"
#include "string.h"
#include "zABCD.h"

int main(int argc, char **argv){
	for(int i=0; i<argc; i++)
		printf("Arg: %d is %s: \n", i, argv[i]);
	printf("---JimName: %s:-----\n", JIM_NAME);
	printB();
	printf("----END-----\n");
}
