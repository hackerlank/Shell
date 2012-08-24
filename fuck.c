#include <stdio.h>
#include <stdlib.h>

#ifdef DEBUG

void _Assert(char *, unsigned);

#define ASSERT(f)	\
			\
if(f)			\
	NULL;		\
else			\
	_Assert(__FILE__, __LINE__)

#else

#define ASSERT(f)	NULL

#endif

int main(int argc, char **argv)
{
	char * ch = NULL;
	
	ASSERT(ch);	

	return 0;
}

void _Assert(char *strFile, unsigned uLine)
{
	fflush(stdout);	
	fprintf(stderr, "\nAssertion failed: %s, line %u\n", strFile, uLine);
	fflush(stderr); 
	abort();
}
