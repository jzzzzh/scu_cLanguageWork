#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int *a;
	int *b;
	a = (int *)malloc(sizeof(int) * n);
	b = (int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i]=0;
	}
	for(int i = 0; i < n; i++)
	{
		int x = a[i];
		int num = 0;
		for(int j = 0; j < i; j++)
		{
			if(x < b[num])
				break;
			num++;
		}
		for(int k = i-1; k >= num; k--)
		{
			b[k+1]=b[k];
		}
		b[num] = x;
		for(int j = 0; j <= i; j++)
		{
			printf("%d ", b[j]);
		}
		printf("\n");
	}	
	
	return 0;
}
