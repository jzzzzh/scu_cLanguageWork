#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int times;
	cin >> times;
	for(int i = 0; i < times; i++)
	{
		string num1, num2;
		cin >> num1 >> num2;
		int length1 = num1.length();
		int length2 = num2.length();
		char a[length2][length1];
		for(int j = 0; j < length2; j++)
		{
			for(int k = 0; k < length1; k++)
			{
				a[j][k] = (num1[length1-k-1] - '0') * (num2[length2-j-1] - '0');
			}
		}
		int ans[length1 + length2 ] = {0};
		for(int j = 0; j < length1+length2-1; j++)
		{
			for(int k = 0; k <= j; k++)
			{	if(k < length2 && (j-k) < length1)
				{
				ans[j] += a[k][j-k];//01234
				}	
			}
		}
		for(int j = 0; j < length1 + length2 -1; j++)
		{
			ans[j+1] = ans[j] / 10 + ans[j+1];
			ans[j] = ans[j] % 10;
		}	
		int length = length1 + length2;
		if(ans[length1+length2-1] == 0)
		{
			length = length - 1;
		}
		
		for(int j = length-1; j >= 0; j--)
		{
			cout << ans[j];
		}
		cout << endl;
	}
	return 0;
}
