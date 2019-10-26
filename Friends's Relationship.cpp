#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;   //Taking input for number of test cases
    while(t--)
    {
        int n,star,hash;  
        cin>>n;   //Taking input for number of Rows
        
        int c=2*(n-1)+2;  //Calculating Number of Columns in the pattern
        for(int i=1;i<=n;i++)
        {
            hash=2*(n-1)-((i-1)*2); //Calculating number of hash in the current row
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
