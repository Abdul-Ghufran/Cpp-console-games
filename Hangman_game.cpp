
#include <iostream>  
#include <ctime>

using namespace std;


void Drawman(int &lives)
{

	cout<<endl<<endl;
	switch(lives)
	{
	
	
	case 6 :                       //in case there are 6 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<"      |"<<endl;
        cout<<"      |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
		
	case 5 :                       //in case there are 5 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"      |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
		
	case 4 :                       //in case there are 4 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<" /|   |"<<endl;
        cout<<"      |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
		
	case 3 :                          //in case there are 3 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<" /|\\  |"<<endl;
        cout<<"      |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
		
	case 2 :                          //in case there are 2 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<" /|\\  |"<<endl;
        cout<<" /    |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
		
	case 1 :                          //in case there are 1 lives and guess doesnot match
	{
	cout<<"  +---+"<<endl;
        cout<<"  |   |"<<endl;
        cout<<"  0   |"<<endl;
        cout<<" /|\\  |"<<endl;
        cout<<" / \\  |"<<endl;
        cout<<"      |"<<endl;
	cout<<"============"<<endl;
	--lives;
	break;
	}
	
	}

}


int main()
{
	srand (time(NULL));
	string wordList[100] =                                 //random list of words 
	{ "apple", "railway", "banana", "laptop", "sofa",
        "carrot", "piano", "umbrella", "guitar", "library",
        "sunflower", "bookshelf", "cucumber", "television", "giraffe",
        "strawberry", "keyboard", "elephant", "clock", "bicycle",
        "watermelon", "cupboard", "chocolate", "dog", "cat",
        "microphone", "sandwich", "football", "basketball", "volcano",
        "ocean", "airplane", "mountain", "camera", "lighthouse",
        "lollipop", "rainbow", "moonlight", "flowerpot", "waterfall",
        "dragonfly", "telephone", "butterfly", "dictionary", "suitcase",
        "umbrella", "beach", "keyboard", "puzzle",
        "elephant", "pineapple", "restaurant", "telescope", "telephone",
        "landscape", "sunglasses", "hamburger", "skyscraper",
        "mosquito", "helicopter", "scissors", "candle", "notebook",
        "headphones", "slippers", "treadmill", "swimming", "teapot",
        "soccer", "basketball", "gymnastics", "octopus",
        "chocolate", "pizza", "unicorn", "mermaid", "dragon",
        "spaceship", "robot", "rocket", "laser", "adventure",
        "treasure", "pirate", "mystery", "explorer",
        "parachute", "vampire", "werewolf", "zombie", "wizard",
        "superhero", "unicorn", "fairy", "magic", "space",
        "jungle", "island", "desert", "volcano" };
        
	string word;
	
	word = wordList[rand()%100];
	int len = word.length();       //calculate the length of the random secret-word that is generated
	char ch[len];
	int lives = 6;
	char guess;
	int u = len;
	bool check = false;	
	string name;
	
	cout<<"Enter your name: ";
        cin>>name;
        int namelen = name.length();          //calculate the length of the name of the user

        cout<<"Welcome, "<< name <<"!"<<endl<<endl;
        
	
	for(int i = 0 ; i < len ; i++)
	{
	ch[i] = '_';
	cout<<ch[i];                //print no. of 
	}
	cout<<endl;
	
	for(int i = 0 ; lives > 0 ; i++)
	{
	
	  if(u == 0)
	  {
	  cout<<"YOU WON :-D "<<endl<<endl;        //if all the underscores are filled player wins 
	  break;
	  }
	    
	    cout<<"enter your guess : ";
	    cin>>guess;                    //asks the user for the guess
	    
	  for(int j = 0 ; j < len ; j++)
	  {
	  if(guess == word[j])             //check if the guess is equal to the secret-word
	  {
	    for(int k = 0 ; k < namelen ; k++)
	    {
	        if(word[j] == name[k])        //player gets an extra life if a letter of name matches a letter in the secret word
	        {    
	            if(lives < 6)
	            {
	            lives++;
	            cout<<"CONGRATS !!!  You got an extra life ..."<<endl;
	            break;
	            }
	        }
	    }
	  }
          }
	    
	    check = false ;
	    
	    for(int j = 0 ; j < len ; j++)
	    {
	       if( guess == word[j] )
	       {
	          ch[j] = guess;              //check if the guess is equal to the secret-word
	          u--;
	          check = true;
	       }
	       cout<<ch[j];
	       	
	    }
	     
	    if(!check)   
	    Drawman(lives);         //calls the Drawman function
	    
	    //outputs the no. of lives after every iteration
	    cout<<endl<<endl<<"lives : "<<lives<<endl<<endl;    
	    cout<<"------------------------------------------------------------------------"<<endl<<endl;
	
	}
	
	if(lives == 0)           //player loses if all the lives are finished
	cout<<"YOU LOST :-( "<<endl<<"The word was : "<<word<<endl;
	
return 0;	
}	
	
	
