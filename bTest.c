#include "stdio.h"
#include "zABCD.h"

int printB()
{
	printf("%s - %d Hello this is function B, name: %s\n", __FUNCTION__, __LINE__,B_STR);
	return 0;
}
