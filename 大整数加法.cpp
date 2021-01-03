#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string a,b;
		cin>>a;
		cin>>b;
		int a_length = a.length();
		int b_length = b.length();
		if(a_length < b_length)//a_length>b_length
		{
			string temp = a;
			a = b;
			b = temp; 
			int temp1 = a_length;
			a_length = b_length;
			b_length = temp1;
		}
		int c[a_length+1]={0};
		int temp;
		for(int j = 0; j < b_length; j++)
		{
			temp = (int)b[b_length-j-1]+(int)a[a_length-j-1] - 2 * 48;// '0' == 48
			c[a_length - j - 1] = ((c[a_length - j] + temp)/10);
			c[a_length-j] = ((c[a_length - j] + temp)%10);
		}
		for(int j = 0; j < a_length - b_length; j++)
		{
			temp = (int)a[a_length-b_length-j-1] - 48; //'0' == 48
			c[a_length - b_length - j - 1] = ((c[a_length - b_length - j] + temp)/10);
			c[a_length - b_length - j] = ((c[a_length - b_length - j] + temp)%10);
		}
		int start;
		if(c[0] == 0)
		{
			start = 1;
		}else{
			start = 0;
		}
		while(start <= a_length)
		{
			cout << c[start];
			start++;
		}
		cout <<endl;
	}
	return 0;
}
