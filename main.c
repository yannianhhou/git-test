#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int* str = (int*)malloc(sizeof(int)*10);
	if(NULL!=str)
	{
		for(i=0;i<10;i++)
		{
			*(str+i)= i;	
		}
	}
	for(i=0; i < 10; i++)
	{
		printf("str = %d\n", str[i]);
	}
	free(str);
	
    return 0;
	
}
