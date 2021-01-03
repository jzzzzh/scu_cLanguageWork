#include<bits/stdc++.h>
using namespace std;
void judge(string s)
{
	char ch;
	int i = 0;
	int num1 = 1,num2 = 0;
	int tmpnum = 0;
	ch = s[i++];
	int flag = 0;
	int fflag = 0;
	while(ch != '\0')
	{
		if(ch <= 'z' && ch >='a' && fflag == 0)
		{
			fflag = 1;
		}
		if(ch == ' ')
		{
		ch = s[i++];	
		continue;
		}
		if(ch == '(')
		{
			if(flag > 0)
			{
				fflag = 1;
			}
			flag++;
			tmpnum++;
			if(tmpnum > num2) num2 = tmpnum;
		}
		if(ch == ')')
		{
			tmpnum--;
			flag--;
		}
		if(ch == ',' && flag == 1)
		{
			fflag = 1;
			num1++;
		}
		ch = s[i++];
	}
	if(fflag > 0)
	cout << num1 << " " << num2 << endl;
	else
	cout << 0 <<" " << num2 << endl;
}
int main(void)
{
	//freopen("in.txt","r",stdin);
	string s;
	getline(cin,s);
	//cout << s << endl;
	while(s != "END")
	{
		judge(s);
		getline(cin,s);
	//cout << s << endl;
	}
	//fclose(stdin);
	return 0;
}
