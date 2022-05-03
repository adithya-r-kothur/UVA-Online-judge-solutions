<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n) )
    {
       if(n==0)
       break;
       
        int sum;
        while((n/10) != 0)
        {

          sum=0;
        while(n !=0)
            {
                sum=sum+n%10;
                 n=n/10;
            }
             n=sum;
            
        }
        cout<<n<<endl;
    }
    return 0;

}
=======
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n) )
        
    {
       if(n==0)
       break;
       
        int sum;
        while((n/10) != 0)
        {

          sum=0;
        while(n !=0)
            {
                sum=sum+n%10;
                 n=n/10;
            }
             n=sum;
            
        }
        cout<<n<<endl;
    }
    return 0;

}
>>>>>>> e1a7995c3942d40d2fff2a338b64a56fba2a866e
