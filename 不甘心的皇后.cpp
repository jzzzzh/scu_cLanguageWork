#include<iostream>
#include<cmath>
using namespace std;
int judge(int a[], int end)
{
	int flag = 1;
	for(int i = 0; i < end; i++)
	{
		if(fabs(a[i]-a[i+1]) > 1)
		{
			flag = 0;
			break;
		}		
	}
	return flag;
}
int set(int a[], int n, int column)
{
	int num = 0;
	if(judge(a,column-2) == 1 && column == n+1)
	return 1;
	else if(judge(a,column-2) == 0)
	return 0;
	if(a[column-1] == 0)
	{
	for(int i = 0; i < n; i++)
	{
		a[column-1] = i+1;
		num += set(a, n, column+1);
		a[column-1] = 0;
	}	
	return num;
	}
	else
	return set(a, n, column+1);	
}
int main(void)
{
//	freopen("4in.txt","r", stdin);
	int n;
	cin >> n;
	while(n != 0)
	{
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int time = set(a,n,1);
		cout << time << endl;
		cin >> n;
	}
//	fclose(stdin);
}
