#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b,n;
    cin>>b>>n;
    while (b)
    {
        int a[b];
        for(int i=0;i<b;i++)
        {
            cin>>a[i];
        }
        int debt,credit,debun;
        
        while(n--)
        {
            cin>>debt>>credit>>debun;
            a[debt-1]-=debun;
            a[credit-1]+=debun;
        }

        bool flag =true;

        for(int i=0;i<b;i++)
        {
            if(a[i]<0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"S"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
         cin>>b>>n;

    }
    
    return 0;
}