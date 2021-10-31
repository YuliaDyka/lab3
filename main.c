#include <stdio.h>
int is_uppercase(char *str);
void main()
{

	printf("********* Laboratory work #3 ***************\n");

	printf("is_upercase(c) = %s\n", is_uppercase("c") ? "true" : "false");
	printf("is_upercase(C) = %s\n", is_uppercase("C") ? "true" : "false");
	printf("is_upercase() = %s\n", is_uppercase("") ? "true" : "false");
	printf("is_upercase(hello I AM DONALD) = %s\n", is_uppercase("hello I AM DONALD") ? "true" : "false");
	printf("is_upercase(HELLO I AM DONALD) = % s\n", is_uppercase("HELLO I AM DONALD") ? "true" : "false");
	printf("is_upercase(ACSKLDFJSgSKLDFJSKLDFJ) = %s\n", is_uppercase("(ACSKLDFJSgSKLDFJSKLDFJ") ? "true" : "false");
	printf("is_upercase(ACSKLDFJSGSKLDFJSKLDFJ) = %s\n", is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") ? "true" : "false");
}

//This function checks if symbol is upercase
int is_uppercase(char *str)
{
	int length = strlen(str);
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int upperLength = strlen(upper);
	for (int x = 0; x < length; x++) 
	{
		int a = 0;
		for (int y = 0; y < upperLength; y++)
		{
			if (str[x] == upper[y])
			{
				a = 1;
				break;
			}
		}
		if (a == 0) 
		{
			return 0;
		}
	}
	return 1;
}