/*描述



输入一段文本，统计中间出现次数最多的回文数。回文数是类似12321，1221这样，顺序和逆序相同的十进制无符号整数，不考虑符号，长度至少为2，不能以0开始。另外，不考虑数的一部分，即abc1232abc中的232不是一个单独的数。(数据可能超过32位)



输入



输入数据为一段文本，可能包含若干行，直到文件末尾(EOF)为止。即只有一组测试用例。



输出



对于每一组输入数据，输出出现次数最多的回文数和它出现的次数。如果有多个，按从小到大输出，每个数占一行。如果没有， 输出None。



样例



输入

Thin34543king 121 is8 interesting121.

I like121 thinking23.



输出

121 3
*/
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
string hws[100];
int num[100] = {0};
int nu = 0;
void ssort(string s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if ((s[j] > s[j + 1] && s[j].length() == s[j + 1].length()) || (s[j].length() > s[j + 1].length()))
                swap(s[j], s[j + 1]);
        }
    }
}

bool judge(string n) //判断回文数
{
    string s = n;
    int length = s.length();
    bool flag = true;
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void search(string hws[], int num[], string n, int &nu) //查找或者插入
{
    int i;
    for (i = 0; i < nu; i++)
    {
        if (hws[i] == n)
        {
            num[i] = num[i] + 1;
            break;
        }
    }
    if (i == nu)
    {
        hws[nu] = n;
        num[nu] = 1;
        nu = nu + 1;
        //cout << nu << endl;
    }
    return;
}

void display(string hws[], int num[], int nu) //输出
{
    if (nu > 0)
    {
        int n[100];
        string maxi[100];
        int numbers = 1;
        int max = num[0];
        maxi[0] = hws[0];

        // cout << nu << endl << endl;
        // for (int i = 0; i < nu; i++)
        // {
        //     cout << num[i] << " " << hws[i] << endl;
        // }
        // cout << endl;

        for (int i = 1; i < nu; i++)
        {
            if (num[i] > max)
            {
                numbers = 1;
                max = num[i];
                maxi[numbers - 1] = hws[i];
            }
            else if (num[i] == max)
            {
                numbers++;
                maxi[numbers - 1] = hws[i];
            }
        }
        ssort(maxi, numbers);
        for (int i = 0; i < numbers; i++)
        {
            cout << maxi[i];
            cout << " " << max << endl;
        }
    }
    else
    {
        cout << "None" << endl;
    }

    return;
}
int main(void)
{
    //freopen("in.txt", "r", stdin);
    string n = "";
    char ch = getchar();
    while (ch != EOF)
    {
        n = "";
        bool flag = false;
        while (ch <= '9' && ch >= '0')
        {
            if (!(flag == false && ch == '0'))
            {
                flag = true;
                n = n + ch;
            }

            ch = getchar();
        }
        if (flag == true)
        {
            bool f = judge(n);
            if (f == true && n.length() > 1)
            {
                search(hws, num, n, nu);
            }
        }
        ch = getchar();
    }
    display(hws, num, nu);
    //fclose(stdin);
    return 0;
}
