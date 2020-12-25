#include<stdio.h>
#include<stdlib.h>
typedef struct location{
	int x;
	int y;
}loaction;
int m,n;
int flag1 = 1, flag2 = 1; 
location lo;
int *px = &lo.x;
int *py = &lo.y;
int *pf1 = &flag1;// 0 
int *pf2 = &flag2;//
int d = 0;//1 shang 0 xia
int *pd = &d;
void next(int x, int y, int flag1, int flag2, int d);
int main(void)
{
	scanf("%d %d", &m, &n);
	int a[m][n]={0};
	lo.x = 0;
	lo.y = 0;
	for(int i = 1; i <= m*n; i++)
	{
		a[lo.x][lo.y]=i;
	//	printf("%d: %d, %d, %d\n",i, flag1, flag2, d);
		next(lo.x, lo.y, flag1, flag2, d);
		
	}
	//a[m-1][n-1]= m*n;
//	printf("%s: %d, %d, %d\n","10",flag1, flag2, d);
	for(int i = 0; i < m; i++)
	{
			for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void next(int x, int y, int flag1, int flag2, int d)
{
	if((y == 0 && flag2 != 1)||(x == m-1 && flag1 != 1))//xieshang 4,6
	{
		*pf1 = 1;
		*pf2 = 1;
		*py = y+1;
		*px = x-1;
		*pd = 1;
	}
	else if((x == 0 || x == (m-1)) && flag1 == 1 && y < n-1)//you 1,5
	{
		*pf1 = 0;
		*py = y+1;
	}
	else if((x == 0 || x == (m-1)) && flag1 == 1 && y == n-1)//xia 11,13
	{
		*pf2 = 0;
		*px = x+1;
	}
	else if((x == 0 && flag1 != 1)||(y == n-1 && flag2 != 1))//xiexia  dui 2,8
	{
		*pf2 = 1;
		*pf1 = 1;
		*py = y-1;
		*px = x+1;
		*pd = 0;
	}
	else if((y == 0 || y == (n-1)) && flag2 == 1 && x < m-1)//xia 3,7
	{
		*pf2 = 0;
		*px = x+1;
	}
	else if((y == 0 || y == (n-1)) && flag2 == 1 && x == m-1)//xia 12,14
	{
		*pf1 = 0;
		*py = y+1;
	}
	

	
	else if(d == 1)//xieshang 9
	{
		*py = y+1;
		*px = x-1;
	}
	else if(d == 0)//xiexia 10
	{
		*py = y-1;
		*px = x+1;
	}
	return;
}
