#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(void)
{
    int times;
    cin >> times;
    int sum = 0;
    int n = 0;
    string a[times];
    for (int i = 0; i < times; i++)
    {
        cin >> a[i];
        bool flag = true;
        for (int j = 0; j < a[i].length(); j++)
        {
            if (a[i][j] == '/')
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            sum += stoi(a[i]);
            n++;
        }
    }
    if(n > 0)
    printf("%.2f\n", (float)sum/n);
    else
    {
        printf("n/a\n");
    }
    return 0;
}
