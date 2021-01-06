//need change
#include <iostream>
using namespace std;
int main(void)
{
    int n, times;
    cin >> n;
    cin >> times;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for (int i = 1; i < times; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = b[i][j];
                b[i][j] = c[i][j];
                c[i][j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
