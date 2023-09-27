#include<iostream>
using namespace std;
    //    1 2 3 4 5
    //1   - - - - * 
    //2   - - - * *
    //3   - - * * *
    //4   - * * * *
    //5   * * * * *
int main(int argc, char const *argv[])
{
    int row,col,n,m;
    cout<<"Enter a Number";

    cin>>m;

    n=m-1;

    for(row=1;row<=m;row++)
    {
        for(col=1;col<=m;col++)
        {
             if(col<=n)
             {
                  cout<<"  ";
                  
             } 
             else
             {
                  cout<<"* ";
               
                                
             }
        }
        n--;
        cout<<endl;
    }
    return 0;
}
