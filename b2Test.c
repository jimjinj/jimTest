#include "stdio.h"
#include "z2ABCD.h"

int printB()
{
	printf("%s - %d Hello this is function B, name: %s\n", __FUNCTION__, __LINE__,B_STR);
	return 0;
}
