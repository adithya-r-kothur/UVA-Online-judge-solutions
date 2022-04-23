#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(int t=1; ;t++)
    {
        string str;
        cin>>str;
        if(str=="*")
        break;

        if(str=="Hajj")
        {
            cout<<"Case "<<t<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(str=="Umrah")
        {
            cout<<"Case "<<t<<": "<<"Hajj-e-Asghar"<<endl;
        }
    }
    return 0;
}