#include<iostream>
using namespace std;
void rightAnswer(int a[], int flag[], int start, int end)
{
	if(start == end)
	{
		cout << "--> ";
		for(int i = 0; i < end; i++)
		{
			if(flag[i] == 1)
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		flag[start] = 1;
		rightAnswer(a,flag,start+1,end);
		flag[start] = 0;
		rightAnswer(a,flag,start+1,end);
	}
}
int main(void)
{
    int m;
    cin>>m;
    for(int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int flag[n] = {0}; 
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        rightAnswer(a, flag, 0,n);
    }
    return 0;
}

