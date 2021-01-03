
#include<stdio.h>
#include<math.h>
void kongge(int i)
{
	for(int j = 0;j < i;j++)
	{
		printf(" ");
	}
	return ;
}
void xinghao(int i)
{
	for(int j = 0;j < i;j++)
	{
		printf("*");
	}
	return ;
}
void daosanjiao(void)
{
	int n;
	scanf("%d", &n);
	int x =2*n-1;
	for(int i = 0; i<n;i++)
	{
		kongge(i);
		xinghao(x-2*i);
		kongge(i);
		printf("\n");
	}
	return ;
	}
 
 int main(void)
 {
 	int n;
 	scanf("%d", &n);
 	for(int i = 0;i<n;i++)
 		daosanjiao();

 	return 0;
 }
