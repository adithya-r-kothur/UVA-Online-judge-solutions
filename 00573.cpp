<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;



int main()
{
    double h,u,d,f;
    while(scanf("%lf" "%lf" "%lf" "%lf" ,&h,&u,&d,&f) !=EOF)
    {
        if(h==0)
        break;
       
        bool flag=true;
        int day =1;
        double height=0;
        double fatigue=(u*f)/100;

        while(1)
        {
            height+=u;
            if(u>0)
            {
                u-=fatigue;
            }
            if(height>h)
            {
                break;
            }
            height-=d;
            if(height<0)
            {
                 flag=false;
                 break;
            }
            day++;

        }

        if(flag)
        {
            cout<<"success on day "<<day<<endl;
        }
        else
        {
            cout<<"failure on day "<<day<<endl;
        }

        
    }
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;



int main()
{
    double h,u,d,f;
    while(scanf("%lf" "%lf" "%lf" "%lf" ,&h,&u,&d,&f) !=EOF)
    {
        if(h==0)
        break;
       
        bool flag=true;
        int day =1;
        double height=0;
        double fatigue=(u*f)/100;

        while(1)
        {
            height+=u;
            if(u>0)
            {
                u-=fatigue;
            }
            if(height>h)
            {
                break;
            }
            height-=d;
            if(height<0)
            {
                 flag=false;
                 break;
            }
            day++;

        }

        if(flag)
        {
            cout<<"success on day "<<day<<endl;
        }
        else
        {
            cout<<"failure on day "<<day<<endl;
        }

        
    }
    return 0;
>>>>>>> e1a7995c3942d40d2fff2a338b64a56fba2a866e
}