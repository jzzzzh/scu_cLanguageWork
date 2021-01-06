#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int length = s.length();
        int t = 0;
        bool flag = false;
        while (t < length)
        {
            while (s[t] == 'A')
            {
                t++;
            }
            if (s[t] == 'S' && s[t + 1] == 'C' && s[t + 2] == 'U')
            {
                t += 3;
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            while (s[t] == 'A')
            {
                t++;
            }
            if (t < length-1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else

            cout << "NO\n";
    }
    return 0;
}
