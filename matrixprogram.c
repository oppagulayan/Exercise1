#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *m1 = fopen("matrix1", "m1");
FILE *m2 = fopen("matrix2", "m2");
if (m1 == NULL || m2 ==  NULL)
	{
	printf("error! Could not open file\n");
	exit(-1);
	}
}
