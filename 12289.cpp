#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s.length()>3)
        {
            cout<<"3"<<endl;
        }
        else
        {
            if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
			else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
			else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
			else if(s[0] == 't' && s[1] == 'w') printf("2\n");
			else if(s[0] == 't' && s[2] == 'o') printf("2\n");
			else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
        }

    }
    return 0;
}