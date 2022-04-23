#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f;
        cin>>f;
        int ans=0;
        while(f--)
        {
            int size , numani, envi;
            cin>>size>>numani>>envi;
            ans+=size*envi;
        }
            cout<<ans<<endl;
    }
    return 0;
}

