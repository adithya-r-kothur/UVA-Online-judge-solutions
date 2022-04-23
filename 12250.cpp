#include<bits/stdc++.h>

using namespace std;

int main()
{
        map<string,string> lang;
        lang["HELLO"]="ENGLISH";
        lang["HOLA"]="SPANISH";
        lang["HALLO"]="GERMAN";
        lang["BONJOUR"]="FRENCH";
        lang["CIAO"]="ITALIAN";
        lang["ZDRAVSTVUJTE"]="RUSSIAN";

        for(int t=1; ; t++)
        {
            string str;
            cin>>str;

            if(str=="#")
            break;
            
            if(lang.find(str) != lang.end())
        {
         cout<<"Case "<<t<<": "<<lang[str]<<endl;
        }
        else
        {
            cout<<"Case "<<t<<": "<<"UNKNOWN"<<endl;
        }
        }
    
    return 0;
}