#include <iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,i,sum=0;

    cout<<"Enter a Number";
    cin>>n ;

    for(i=2;i<n;i++)
    {
       sum=a+b;
       a=b;
       b=sum;  

    }
    cout<<sum;
    return 0;
}
