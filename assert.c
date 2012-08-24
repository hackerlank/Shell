#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

void _Assert(char *strFile, unsigned uLine)
{
	fflush(stdout);	
	fprintf(stderr, "\nAssertion failed: %s, line %u\n", strFile, uLine);
	fflush(stderr); 
	abort();
}
