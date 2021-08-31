#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j || (i-j)%2==0 )
            {
                cout<<"1 ";
            }
            else 
            {
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}