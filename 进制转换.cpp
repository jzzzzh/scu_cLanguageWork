#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		int a,b;
		scanf("%d %d", &a, &b);
		int x=0;
		int j = 0;
		while(a != 0)
		{
			x=a%b*pow(10,j)+x;
			a=a/b;
			j++;
		}
		printf("%d\n", x);
	}
	
	return 0;
}
