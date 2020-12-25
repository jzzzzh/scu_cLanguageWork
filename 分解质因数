#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{	
		
		string s = "";
		int num;
		cin >> num;
		for(int i = 2; i <= num; i++)
		{
			while( num % i == 0)
			{
				s = s + "*" + to_string(i);
				num /= i;
			}
			if(num == 1)
			break;
		}
		string ss(s,1,s.length()-1);
		cout << ss << endl;
	}
	return 0;
}
