#include<iostream>
using namespace std;
    //    1 2 3 4 5 6 7
    //1        *
    //2     * * *
    //3     * * * *
    //4     * * * * *
    //5   * * * * * * *
int main(int argc, char const *argv[])
{
    
    int row,col,n=4;
   
    for(row=1;row<=5;row++)
    {
       
        for(col=1;col<=5;col++)
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

        for(col=4;col>=1;col--)
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
