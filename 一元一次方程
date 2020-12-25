#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int c = 0, a = 0;
		string x;
		string num = "";
		int temp;
		int length = s.length();
		int fh = 1;
		int zy = 1;
		int find = 0;
		for(int j = 0; j < length; j++)
		{
			if(s[j] == '=')
			{
				zy = -1;
				fh = 1;
			}
			if((s[j] == '+')||(s[j-1]=='='&&s[j]!='-'))
			{
				fh = fh * zy;
			}
			if(s[j] == '-')
			{
				fh = -fh * zy;
			}
			else if(s[j] <= '9' && s[j] >= '0')
			{
				while(s[j+1] <= '9' && s[j+1] >= '0')
				{
					num +=s[j];
					j++;
				}
				num +=s[j];
				temp = stoi(num);
				if(!(s[j+1] <= 'z' && s[j+1] >= 'a')||(s[j+1] <= 'Z' && s[j+1] >= 'A'))
				c = c + fh * temp;
				else
				{
					j++;
					a = a +  fh * temp;
					fh = 1;
					if(find == 0)
					{
//						while((s[j+1] <= 'z' && s[j+1] >= 'a')||(s[j+1] <= 'Z' && s[j+1] >= 'A'))
//						{
//							x += s[j];
//							j++;
//						}	
						x += s[j];
						find++;
					}
//					while((s[j+1] <= 'z' && s[j+1] >= 'a')||(s[j+1] <= 'Z' && s[j+1] >= 'A'))
//					{
//						j++;
//					}	
				}
				num = "";
				fh = 1;
			}
			else if((s[j] <= 'z' && s[j] >= 'a')||(s[j] <= 'Z' && s[j] >= 'A'))  //¡Á?¡¤?
			{
				//cout <<"fh="<<fh <<endl;
				a = a + fh;
				fh = 1;
				if(find == 0)
				{
//				while((s[j+1] <= 'z' && s[j+1] >= 'a')||(s[j+1] <= 'Z' && s[j+1] >= 'A'))
//				{
//					x +=s[j];
//					j++;
//				}	
				x += s[j];
				find++;
				}
//				while((s[j+1] <= 'z' && s[j+1] >= 'a')||(s[j+1] <= 'Z' && s[j+1] >= 'A'))
//				{
//				j++;
//				}	
				
			}
		}
		//cout << a <<"x"<<"+"<<c<<"=0"<<endl;
		cout << x << "=";
		if(c!=0){
			
		cout << fixed<<setprecision(6) << (-1.0) * c / a << endl; 
		}else
		{
			cout << fixed<<setprecision(6) << 0.0 << endl; 
		}
		
	}
	return 0;
}
