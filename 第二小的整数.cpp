#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int m,n;
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> n;
		int a[n];
		for(int j = 0 ; j < n; j++)
		{
			cin >> a[j];
		}
		sort(a,a+n);
		if(n <= 1)
		cout << "ERROR" << endl;
		else
		{
			int k = 0;
			while(a[k]==a[k+1] && k < n-1)
			{
				k++;
			}
			if(k == n-1)
				cout << "ERROR" << endl;
			else
				cout << a[k+1] << endl;
		}
	}
	return 0;
}
