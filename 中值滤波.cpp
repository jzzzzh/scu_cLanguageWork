//need change
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
    int w, n;
    scanf("%d %d", &w, &n);
    {
        if (w % 2 == 0 || w > n)
        {
            int a[n];
            int b[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                if (i < (w + 1) / 2 - 1 || i > n - (w + 1) / 2) //1, 3//2,2
                    b[i] = a[i];
            }
            cout << "ERROR" << endl;
        }

        else
        {
            int a[n];
            int b[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                if (i < (w + 1) / 2 - 1 || i > n - (w + 1) / 2) //1, 3//2,2
                    b[i] = a[i];
            }
            int temp[w];
            for (int i = (w + 1) / 2 - 1; i <= n - (w + 1) / 2; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    temp[j] = a[i + j -(w-1)/2];
                }
                sort(temp, temp + w);
                b[i] = temp[(w - 1) / 2];
            }
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
}
