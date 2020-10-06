#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	double value1 = 0, value2 = 0, absoluteDifference = 0;
	if( argc !=3)
	{
		printf("usage: numstat val1 val2\n");
	}
	else
	{
		value1 = atof(argv[1]);
		value2 = atof(argv[2]);
	
		if(value1 < value2)
		{
			printf("Input: Value1 %.3f, Value2 %.3f\n", value1, value2);
			absoluteDifference = value2 - value1;
			
		}
		else
		{
			printf("Input: Value2 %.3f, Value1 %.3f\n", value2, value1);
			absoluteDifference = value1 - value2;
		}
	
	printf("The sum of all Values is: %.3f\n", value1 + value2);
	printf("The absolute difference is: %.3f\n", absoluteDifference);
	printf("The product of all Values is: %.3f\n", value1 * value2);
	printf("The Ratio is: %.3f\n", value2 / value1);
	}	
	
return 0;
}
