#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        cout<<"Case "<<i<<": "<<a[0]<<endl;
    }
    return 0;
}