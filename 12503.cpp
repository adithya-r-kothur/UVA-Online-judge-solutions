#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> instructions;
        int p=0;

        while(n--)
        {
            string temp;
            cin>>temp;
            if(temp=="LEFT")
            {
                --p;
                instructions.push_back(-1);
            }
            else if(temp=="RIGHT")
            {
                ++p;
                instructions.push_back(1);
            }
            else
            {
                int num;
                cin>>temp>>num;
                p+=instructions[num-1];
                instructions.push_back(instructions[num-1]);

            }
            
        }
        cout<<p<<endl;
        
    }
    return 0;
}