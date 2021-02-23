#include"myutils.h"

int fact(int f)
{
	int result=1;
	if(f<0)
	{
		printf("\nNumber cannot be negative");
		return 0;
	}
	if(f==0 || f==1)
	{
		return 1;
	}
	
	result=f*fact(f-1);
	return result;
}