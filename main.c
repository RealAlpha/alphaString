#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "alphaString.h"

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			struct alphaString alphaString = setAlphaString(argv[i]);
			char *representationBuffer = malloc(alphaString.len + 3);
			strncpy(representationBuffer, alphaString.string, alphaString.len+2);
			representationBuffer[alphaString.len + 2] = '\0';
			printf("%s's alphastring representation: %s\n", argv[i], representationBuffer);
			free(representationBuffer);
			freeAlphaString(alphaString);
		}
	}
}
