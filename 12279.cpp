#include<bits/stdc++.h>


using namespace std;
int  main()
{
    for(int t=1;;t++)
    {  
        int k;
        cin>>k;
        
        if (k==0)
        break;

        
        

        int a[k];
        int c=0,b=0;

        for(int i=0;i<k;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        cout<<"Case "<<t<<": "<<c-b<<endl;

    }
 return 0;
}