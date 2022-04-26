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
        int a[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int high=0,low=0;
        for(int i=0;i<n-1;i++)
        {
            
            
            
            if(a[i+1]<a[i])
            {
                low++;
            }
            else if(a[i+1]>a[i])
            {
                high++;
            }
            
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}