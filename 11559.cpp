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

}