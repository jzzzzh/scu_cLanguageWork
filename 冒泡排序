#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int *a;
	int tmp;
	a = (int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1 ; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		
		for(int k = 0; k < n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}	
	
	return 0;
}
