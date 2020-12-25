#include<iostream>
#include<string>
using namespace std;
typedef struct words{
    string w;
    int num;
    struct words * next;
}words;
 words * word = new words;
bool search(string s, words *head)
{
    words *t = head;
    if(t->w == s)
    {
         t->num++;
         return true;
    }
    else
    {
        if(t->next == NULL)
        {
            return false;
        }
        else
        {
            search(s, t->next);
        }
        
    }
}
int main(void)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt","w",stdout);
//    words * word;
    char ch = getchar();
//    cout << ch << endl;
    string temp = "";
    while (!((ch <= 'z' && ch >= 'a') ||(ch <='Z'&&ch>='A')))
    {
        ch = getchar();
    }
    while(((ch <= 'z' && ch >= 'a') ||(ch <='Z'&&ch>='A')))
    {
        temp += tolower(ch);
        ch = getchar();
    }
    words *head = word; 
    //words *end = word;
    word->w = temp;
    word->num = 1;
    word->next = NULL;
    ch = getchar();
    while(ch != EOF)
    {
        temp = "";
        bool flag = false;
        while(((ch <= 'z' && ch >= 'a') ||(ch <='Z'&&ch>='A')))
        {
            flag = true;
            temp += tolower(ch);
            ch = getchar();
        }
        if(flag == true)
        {
            bool f = search(temp, head);
            if(f == false)
            {
                words *te = (words*)new words;
                te->next = NULL;
                te->w = temp;
                te->num = 1;
                word->next =te;
                word = word->next;
            }
        }
        ch = getchar();
    }
    string maxs = head->w;
    int max = head->num;
    words *tem = head;
    while(tem->next != NULL)
    {
        tem = tem->next;
        if((tem->num > max)||(tem->num == max && tem->w > maxs))
        {
            max = tem->num;
            maxs = tem->w;
        }
    }
    cout << maxs << " " << max << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
