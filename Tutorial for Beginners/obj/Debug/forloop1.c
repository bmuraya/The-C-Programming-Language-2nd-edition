#include <stdio.h>

int main()
{
	int  a, b, avg, count ;
	
	for(count = 1; count<=3; count++)
	{
		printf("Enter values of a and b: ");
		scanf("%d %d",&a,&b);
		avg=(a+b)/2;
		printf("Average = %d" , avg);
	}
	
	return 0;
}sss