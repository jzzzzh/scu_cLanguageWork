#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int main(void)
{
   // freopen("in.txt","r",stdin);
    int n;
    cin >> n;
    int max, min;
    string maxname, minname;
    string maxnumb, minnumb;
    int score;
    string name, num, sscore;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> num >> sscore;
        bool flag = true;
        for (int j = 0; j < sscore.length(); j++)
        {
            if (sscore[j] == '/')
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
            continue;
        else
        {
            score = stoi(sscore);
        }
        
        if (f == true)
        {
            f = false;
            max = score;
            min = score;
            minname = name;
            maxname = name;
            maxnumb = num;
            minnumb = num;
            continue;
        }
        if (score > max || (score == max && name < maxname))
        {
            max = score;
            maxname = name;
            maxnumb = num;
        }
        if (score < min || (score == min && name > maxname))
        {

            min = score;
            minname = name;
            minnumb = num;
        }
    }
   
    cout << maxname << " " << maxnumb << endl;
    cout << minname << " " << minnumb << endl;
   // fclose(stdin);
    return 0;
}
