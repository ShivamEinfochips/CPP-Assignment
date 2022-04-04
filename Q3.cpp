//Shivam Pandey
#include<bits/stdc++.h>
using namespace std;

int a=0;
int ans =0;

void checkSequence(string str, int len)
{
    string temp;
    for(int i=0;i<len;i++)
    {
        temp = str.substr(i,2);
        if(temp=="01")
        {
            a++;
        }
    }
}

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    checkSequence(str,len);
    ans+=a;
    a=0;

    for(int i=0;i<len-2;i++)
    {
        for(int j=i+2;j<len;j++)
        {
            string str1 = str;
            char x;
            x = str1[i];
            str1[i] = str1[j];
            str1[j] = x;
            if(str1!=str)
            {
                checkSequence(str1,len);
                ans+=a;
                a=0;
            }
        }
    }
    cout<<"\nTotal occurance of '01' is: "<<ans<<endl;
    return 0;
}
