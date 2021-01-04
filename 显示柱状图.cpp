#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int num[n];
	char ch[n];
	char s;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		s = getchar();
		if(s == ' '|| s == '\n' || s == '\0')
		{
			ch[i] = '+';
		}
		else
		{
			ch[i] = s;
		}
	}
	for(int j = 15; j >= -15; j--)
	{
		bool flag = false;
		string ss = "";
		if(j != 0)
		{
			for(int k = 0; k < n; k++)
			{
				if((num[k] >= j && num[k] > 0 && j > 0) || (num[k] < 0 && num[k] <= j &&j < 0) )
				{
					flag = true;
					ss+=ch[k];
				}
				else
				{
					ss+=" ";
				}
				ss+=" ";
			}
		}
		else
		{
			flag = true;
			for(int k = 0; k < 2*n-1; k++)
			{
				ss+="-";
			}
		}
		if(flag == true)
		{
			cout << ss << endl;
		}	
	}
	return 0;
}
