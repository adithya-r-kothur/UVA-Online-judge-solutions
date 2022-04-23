#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1024];
    bool flag=1;
    while(gets(s))
    {
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='"')
            {
                if (flag)
                {
                    cout<<"``";
                    flag=0;
                }
                else
                {
                    cout<<"''";
                    flag=1;
                }
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }


    
    return 0;
}