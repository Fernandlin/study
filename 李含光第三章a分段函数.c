#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 1)
	{
		y = x;
	}
 
	else if (1 <= x && x < 10)
	{
		y = 2 * x-11;
//注意乘法的表达方式是 *
	}
 
	else if (x >=10) 
//注意大于等于中间不能有空格 
	{
		y = 3 * x - 11;
	}
 
	printf("%d", y);
 
	return 0;
}
