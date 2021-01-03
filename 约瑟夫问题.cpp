#include<stdio.h>
#include<stdlib.h>
int sum(int* a);
int main(void)
{
	int n,k,m;
	scanf("%d %d %d", &n, &k, &m);
	int *a ;
	int count = 0;
	a = (int *)malloc(sizeof(int) * (n+1));
	for(int i = 0; i < n+1; i++)
	{
		a[i] = 0;
	}
	for(int i = 0; i < n-2; i++) //start
	{
		do
		{
			if(k == n+1)
				k = 1;
			if(a[k] == 0)
				count++;
			k++;
			}while(count != m);
		a[k-1] = 1;	
		count = 0;
	}//end
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	
	return 0;
}
