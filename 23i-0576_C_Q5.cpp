#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() 
{
  string p1name, p2name;
  int p1rollnumber, p2rollnumber;
  int p1score = 0, p2score = 0 , p1rolls = 0 , p2rolls = 0 , m1=0 , m2=0 ;
  cout << "Enter the name of player 1 (without spaces) : ";
  cin >> p1name;
  cout << "Enter the roll number of player 1 (last 4 digits only) : ";
  cin >> p1rollnumber;
  cout << "Enter the name of player 2 (without spaces) : ";
  cin >> p2name;
  cout << "Enter the roll number of player 2 (lasr 4 digits only) : ";
  cin >> p2rollnumber;
  
  // Start the game.
  for (int r = 1; r <= 5; r++) 
  {
  
    cout <<endl<< "Round " << r <<endl<<endl;
                    // Player 1 rolls the dice.
                    
    int p1roll1 = rand() % 6 + 1;
    int p1roll2 = rand() % 6 + 1;
    p1rolls = p1roll1 + p1roll2;               //total rolls of player-1
    cout<<"1st Roll of "<<p1name<<" : "<<p1roll1<<endl<<"2nd Roll of "<<p1name<<" : "<<p1roll2<<endl;
    cout<<"Total score of "<<p1name<<" after both rolls : "<<p1rolls<<endl;
    p1score += p1rolls;                 //total score of player 1 after every round
    
    
    //now compare the rolls of player-1 with its last two digits of roll no.
     if (p1rolls == p1rollnumber % 100) 
        { 
            p1score += p1rollnumber % 10;
            cout<<"YOU'VE GOT "<<p1rollnumber % 10<<" EXTRA POINTS";
        }
    
    //now compare the rolls of player-1 with the last alphabet of its name 
    char a1=p1name[p1name.length()-1];
    char x1='a' , x2='A';
    if (a1>=65)
    {
        for(int i=1;i<=25;i++)
        {
            if(x1==a1)
                m1=x1-64;
            else
                x1++;
        }
    }     
        else if (a1>=97)
    {
        for(int i=1;i<=25;i++)
        {
            if(x2==a1)
                m1=x2-96;
            else
                x2++;
        }
    }
      
    
    if(p1rolls==m1)
    {
        p1score += 5;
        cout<<"You got 5 extra points"<<endl;          //if the value matches then player 1 gets 5 points
    cout<<"FINAL SCORE OF "<<p1name<<" after round "<<r<<" : "<<p1score<<endl;         //final score of player 1 after every round
    
    }
    
                   // Player 2 rolls the dice.
    int p2roll1 = rand() % 6 + 1;
    int p2roll2 = rand() % 6 + 1;
    p2rolls = p2roll1 + p2roll2;              //total rolls of player-2
    cout<<"1st Roll of "<<p2name<<" : "<<p2roll1<<endl<<"2nd Roll of "<<p2name<<" : "<<p2roll2<<endl;
    cout<<"Total score of "<<p2name<<" after both rolls : "<<p2rolls<<endl;
    p2score += p2rolls;
    
    //now compare the rolls of player-2 with its last two digits of roll no.
    if (p2rolls == p2rollnumber % 100) 
        {
            p2score += p2rollnumber % 10;
            cout<<"YOU'VE GOT "<<p2rollnumber % 10<<" EXTRA POINTS";
        }
    
    //now compare the rolls of player-2 with the last alphabet of its name 
    char a2=p2name[p2name.length()-1];
    if (a2>=65)
    {
        for(int i=1;i<=25;i++)
        {
            if(x1==a2)
                m2=x1-64;
            else
                x1++;
        }
    }     
    else if (a2>=97)
    {
        for(int i=1;i<=25;i++)
        {
            if(x2==a2)
                m2=x2-96;
            else
                x2++;
        }
    }
    
    if (p2rolls==m2)
    {
       p2score += 5;
       cout<<"You got 5 extra points"<<endl;       //if the value matches then player 2 gets 5 points
    }
    
    cout<<"FINAL SCORE OF "<<p2name<<" after round "<<r<<" : "<<p2score<<endl;            //final score of player 2 after every round
    
    }
    
    
    cout<<"SCORE OF "<<p1name<<" : "<<p1score<<endl;            //score of player 1 after the whole game
    cout<<"SCORE OF "<<p2name<<" : "<<p2score<<endl;            //score of player 2 after the whole game
    
    if(p1score > p2score)
    cout<<"PLAYER 1 "<<p1name<<" WINS "<<endl;
    else if(p2score > p1score)
    cout<<"PLAYER 2 "<<p2name<<" WINS "<<endl;
    
    //Tie breaker
    else if (p1score == p2score) 
     {
        cout << "It's a tie! Now roll 1 time each to break the tie." << endl;

        int p1roll = rand() % 6 + 1;
        int p2roll = rand() % 6 + 1;

        cout<<p1name<<" rolled again and got : "<<p1roll<<endl;
        cout<<p2name<<" rolled again and got : "<<p2roll<<endl;

        if (p1roll > p2roll) 
        {
            cout<<p1name<<" wins!"<<endl;
        } 
        else if (p2roll > p1roll) 
        {
            cout<<p2name<<" wins!"<<endl;
        } 
        else 
        {
        cout<<"It's still a tie. Continue rolling 1 die each until a winner is determined."<<endl;
        }
        
        }
        
    return 0;
}


