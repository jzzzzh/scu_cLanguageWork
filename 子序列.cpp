#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char s0[1024];
	char s10[1024];
	fgets(s0,sizeof(s0),stdin);
	fgets(s10, sizeof(s10), stdin);
	string s(s0, 0, strlen(s0)-1);
	string s1(s10, 0, strlen(s10)-1);
	int j = 0;
	for(int i = 0; i < s.length();i++)
	{
		if(s[i]==s1[j])
		j++;
	}
	if(j == s1.length())
	cout<<"YES\n";
	else
	cout << "NO\n";
	return 0;
}
