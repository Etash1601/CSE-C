#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a,b;
	float c;
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30;b++)
		{
			c = sqrt(a*a + b*b);
			if(c==(int)c)  // to check if calculated c has integer value
			printf("%d and %d = %d\n",a,b,(int)c);
		}
	}
	return 0;
}
