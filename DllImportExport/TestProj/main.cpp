#include<stdio.h>
#include"dlltest.h"

int main(int argc, char** argv)
{
	printf("Simple DLL test start. \n");
	printf("Call DLL function: \n");
	printf("Test DLL values: %d \n", add(1, 2));
	printf("Call DLL function end. \n");
	printf("Simple DLL test end. \n");
	return (0);
}
