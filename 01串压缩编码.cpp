#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int itob(int n) 
{
 if(n < 2)                       
 	return n; 
 else 
  return itob(n/2)*10+n%2;                    
} 
int main(void)
{
	int n;
	cin >> n;
	string ans;
	while(n > 0)
	{ 
		int m;
		cin >> m;
		string st = to_string(itob(m));
		int lt = st.length();
		while(lt < 8)
		{
			st = "0"+st;
			lt++;
		}
		ans += st;
		n -= 8;
	}
	int length = ans.length();
	int num = 0;
	for(int i = 0; i < length; i++)
	{
		char c = ans[i];
		
		num++;
		if(c != ans[i+1] || i == length-1)
		{
			cout << 128 * (c-'0') + num << " ";
			num = 0;
		}	
	}
	return 0;
}
