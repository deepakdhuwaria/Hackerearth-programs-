#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,star,hash;
        cin>>n;
        
        int c=2*(n-1)+2;
        for(int i=1;i<=n;i++)
        {
            hash=2*(n-1)-((i-1)*2);
            star=i;
            for(int j=1;j<=c;j++)
            {
                if(star!=0){
                    cout<<"*";
                    star--;
                }
                
                else if(hash!=0&&star==0){
                cout<<"#";
                hash--;
                
                }
                
                    if(hash==0&&star==0)
                    {
                        star=i;
                    }
                
                        
               
              
            }
             cout<<"\n";
        }
        cout<<endl;
    }
        
    
}
