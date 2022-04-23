#include<bits/stdc++.h>

using namespace std;


int main()
{
    int k;
  while(scanf("%d",&k)==1 && k)
  {
      int n,m;
      cin>>n>>m;
      while(k--)
        { 
        int x,y;
        cin>>x>>y;
        
            if(x>n && y>m)
        {
           cout<<"NE"<<endl;
        }
        else if(x>n && y<m)
        {
           cout<<"SE"<<endl;
        }
        else if(x<n && y>m)
        {
           cout<<"NO"<<endl;
        }
        else if(x<n && y<m)
        {
           cout<<"SO"<<endl;
        }
        
        else if(x==n || y==m)
        {
            cout<<"divisa"<<endl;
        }
        
        
    
  }
  }
  
    
    return 0;
}
