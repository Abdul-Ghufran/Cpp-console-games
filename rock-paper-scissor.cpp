#include<iostream>
using namespace std;
int main()
{   
    int p1 , p2;
    //enter 1 for rock , 2 for paper , 3 for scissor.
    cout<<"Enter choice of player 1 :"<<endl; cin>>p1;
    cout<<"Enter choice of player 2 :"<<endl; cin>>p2;
    switch (p1)
    {
         case 1:
              switch (p2)
                    {
                         case 1:
                         cout<<"DRAW";
                         break;
                         
                         case 2:
                         cout<<"Player 2 wins ";
                         break;
                         
                         case 3:
                         cout<<"Player 1 wins ";
                         break;
                     }  
          break ;             
         case 2:
              switch (p2)
                    {
                         case 2:
                         cout<<"DRAW";
                         break;
                         
                         case 3:
                         cout<<"Player 2 wins ";
                         break;
                         
                         case 1:
                         cout<<"Player 1 wins ";
                         break;           
                    }
           break ;         
        case 3:
              switch (p2)
                    {
                         case 3:
                         cout<<"DRAW";
                         break;
                         
                         case 1:
                         cout<<"Player 2 wins ";
                         break;
                         
                         case 2:
                         cout<<"Player 1 wins ";
                         break;
                    }  
           break ;           
    }
    return 0;
    }
    
    
    
    
    
    
