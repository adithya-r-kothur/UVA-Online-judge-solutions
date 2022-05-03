<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int part,budg,hotel,weeks;
    while(cin>>part>>budg>>hotel>>weeks)
    {
        
         int mincost=budg+1;
        for(int i=0;i<hotel;++i)
        {
            int price;
            cin>>price;
            for(int i=0;i<weeks;++i)
            {
                int beds;
                cin>>beds;
                if(beds>=part && price*part<=mincost)
                {
                    mincost=price*part;
                }
            }
            
        }
        

        if(mincost<=budg)
        {
            cout<<mincost<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
    return 0;

=======
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int part,budg,hotel,weeks;
    while(cin>>part>>budg>>hotel>>weeks)
    {
        
         int mincost=budg+1;
        for(int i=0;i<hotel;++i)
        {
            int price;
            cin>>price;
            for(int i=0;i<weeks;++i)
            {
                int beds;
                cin>>beds;
                if(beds>=part && price*part<=mincost)
                {
                    mincost=price*part;
                }
            }
            
        }
        

        if(mincost<=budg)
        {
            cout<<mincost<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
    return 0;

>>>>>>> e1a7995c3942d40d2fff2a338b64a56fba2a866e
}