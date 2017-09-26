#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		char c = argv[i][0];
		switch(c) 
		{
			case('+'):
				printf("%f", atof(argv[i+1]) + atof(argv[i+2]));
				break;
			case('-'):
				printf("%f", atof(argv[i+1]) - atof(argv[i+2]));
				break;
			case('x'):
				printf("%f", atof(argv[i+1]) * atof(argv[i+2]));
				break;
			case('/'):
				printf("%f", atof(argv[i+1]) / atof(argv[i+2]));
				break;
		}
	}
}

