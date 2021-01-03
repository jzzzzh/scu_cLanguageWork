#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(void)
{
    //freopen("3in.txt", "r", stdin);
    int n;
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++)
    {
        int odd[100];
        int even[100];
        int oddnum = 0;
        int evennum = 0;
        char ch = getchar();
        int temp = 0;
        while(ch != '\n')
        {
            bool flag = false;
        while (ch >= '0' && ch <= '9')
        {
            flag = true;
            temp = temp * 10 + ch -'0';
            ch = getchar();
        }        
        if(flag == true)
        {
            if(temp % 2 == 1) //odd
            {
                odd[oddnum++] = temp;
            }
            else //even
            {
                even[evennum++] = temp;
            }
            temp = 0;
        }
        else
        ch = getchar();
        }
        sort(odd, odd+oddnum);
        sort(even, even+evennum);
        for(int j = 0; j < oddnum; j++)
        {
            cout << odd[j] << " ";
        }
        for(int j = 0; j < evennum; j++)
        {
            cout << even[j] << " ";
        }
        cout << endl;
    }
   // fclose(stdin);
    return 0;
}
