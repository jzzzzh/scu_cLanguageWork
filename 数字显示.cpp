#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string a[10][7]    = {"*****",
                          "*   *",              
                          "*   *",
                          "*   *",              
                          "*   *", 
                          "*   *",              
                          "*****",   
						  "    *",
                          "    *",              
                          "    *",
                          "    *",              
                          "    *", 
                          "    *",              
                          "    *",  
						  "*****",
                          "    *",              
                          "    *",
                          "*****",              
                          "*    ", 
                          "*    ",              
                          "*****",   
						  "*****",
                          "    *",              
                          "    *",
                          "*****",              
                          "    *", 
                          "    *",              
                          "*****", 
						  "*   *",
                          "*   *",              
                          "*   *",
                          "*****",              
                          "    *", 
                          "    *",              
                          "    *",   
						  "*****",
                          "*    ",              
                          "*    ",
                          "*****",              
                          "    *", 
                          "    *",              
                          "*****",  
						  "*****",
                          "*    ",              
                          "*    ",
                          "*****",              
                          "*   *", 
                          "*   *",              
                          "*****",  
						  "*****",
                          "    *",              
                          "    *",
                          "    *",              
                          "    *", 
                          "    *",              
                          "    *",  
						  "*****",
                          "*   *",              
                          "*   *",
                          "*****",              
                          "*   *", 
                          "*   *",              
                          "*****",  
						  "*****",
                          "*   *",              
                          "*   *",
                          "*****",              
                          "    *", 
                          "    *",              
                          "*****",   };

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s = to_string(m);
        int length = s.length();
        cout << m << ":" << endl;
        for(int k = 0; k < 7; k++)
        {
            for(int j = 0; j < length; j++)
            {
                cout << a[s[j]-'0'][k] << "  ";
            }
            cout << endl;
        }
    }  
    return 0;                        
}
