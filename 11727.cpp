#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int a[3];

        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3,greater<int>());
        cout<<"Case "<<i<<": "<<a[1]<<endl;
    }
    return 0;
}