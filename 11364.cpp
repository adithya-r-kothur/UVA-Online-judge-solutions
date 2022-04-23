#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n,greater<int>());
        

        int ans=(a[0]-a[n-1])*2;
        cout<<ans<<endl;
    }
    return 0;
}