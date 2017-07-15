#include "string.h"
#include "stdlib.h"
#include "alphaString.h"

char *getAlphaString(struct alphaString alphaString)
{
	char *returnValue = malloc(alphaString.len + 1);
	strncpy(returnValue, alphaString.string, alphaString.len);
	return returnValue;
}

struct alphaString setAlphaString(char *string)
{
	struct alphaString alphaString;
	
	alphaString.string = malloc(strlen(string) + 2);

	strncpy(alphaString.string, string, strlen(string));
	
	alphaString.len = strlen(string);

	alphaString.string[alphaString.len] = ':';
	alphaString.string[alphaString.len+1] = 'p';

	return alphaString;
}

void freeAlphaString(struct alphaString alphaString)
{
	// Add a null-terminator so free won't start acting all wierd
	alphaString.string[alphaString.len+1] = '\0';
	free(alphaString.string);
}
