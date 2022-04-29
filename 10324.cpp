#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d=1;
    string bitstring;


    while(cin>>bitstring)
    {
        int n;
        cin>>n;
             cout << "Case "
             << d++
             << ":" 
             << endl;
        while(n--)
        {
            int i,j;
            cin>>i>>j;
            int mini =min(i,j);
            int maxi =max(i,j);


            string substring = bitstring.substr(mini,maxi-mini+1);

             if (substring.size() <= 1 || unique(substring.begin(), substring.end()) == substring.begin() + 1 )
              {
                cout << "Yes" << endl;
              }
            else
                cout << "No" << endl;
        }
    }
    return 0;
}