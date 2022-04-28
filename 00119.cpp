#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1;
    int n;
    while(cin>>n)
    {
        vector<string> names;
        map<string,int> balance;

        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;

            names.push_back(temp);
            balance[temp]=0;
        }
        for(int i=0;i<n;++i)
        {
            string temp;
            cin>>temp;
            int money,npep;
            cin>>money>>npep;
            if(npep==0)
            continue;
            int gift=money/npep;

            balance[temp]-=gift*npep;

            for(int i=0;i<npep;++i)
            {
                string name;
                cin>>name;
                balance[name]+=gift;
            }
        }
        if(t++>1)
        {
            cout<<endl;
        }
        for(int i=0;i<n;++i)
        {
            cout<<names[i]<<" "<<balance[names[i]]<<endl;
        }

    }
    return 0;
}