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
//ע��˷��ı�﷽ʽ�� *
	}
 
	else if (x >=10) 
//ע����ڵ����м䲻���пո� 
	{
		y = 3 * x - 11;
	}
 
	printf("%d", y);
 
	return 0;
}
