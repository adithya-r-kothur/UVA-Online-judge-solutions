#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

        int amt=0;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="donate")
        {
            int a;
            cin>>a;
            amt+=a;
        }
        else
        {
            cout<<amt<<endl;
        }
    }
    return 0;
}