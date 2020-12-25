#include<iostream>
#include<cmath>
using namespace std;
long fun(long a, long n)
{
	if(a % n == 1)
	{
		return -(long)(a/n);
	}
	else if(a % n == 0)
	{
		return 1;//?
	}
	else
	{
	return (long)(-fun(n,a%n)*(long)(a/n) + fun(a%n, n%(a%n)));
	}
}

int main(void)
{
	//freopen("in.txt", "r", stdin);
	long a,n;
	cin >> a >> n;
	while(!(a == 0 && n == 0))
	{
	//	cout << a << "  "<< n << endl;
		int tt = fun(n,a);
		
		while(tt < 0)
		{
			tt += n;
		}
		
		cout << tt << endl;
		cin >> a >> n;
	}
	//fclose(stdin);
}
