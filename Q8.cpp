//Shivam Pandey
#include <iostream>
#include<string.h>
using namespace std;

void findSequence(string s)
{
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            if(s[i]!='A')
            {
                flag==1;
            }
        }
        else
        {
            if(s[i]!='B')
            {
                flag=1;
            }
        }
    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
}
int main()
{
    string s;
    cin>>s;
    findSequence(s);
    return 0;
}