struct alphaString
{
	char *string;
	int len;
};

// Get's the char* representation of an alphaString (with a \0 instead of :P)
char *getAlphaString(struct alphaString alphaString);
// Stores a char* as an alphaString
struct alphaString setAlphaString(char *string);
