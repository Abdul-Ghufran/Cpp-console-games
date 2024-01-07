These are some console games I made. There are certain rules added in these games too such as bonuses.
I will also specify the rules for the games where bonus are added.


""""""""""""""""""
HANGMAN GAME :-  "
""""""""""""""""""

For this assignment, you will be making a simple version of the word game Hangman, This game
will be played in the terminal window. In this game, the computer picks a random secret word
from an available list. The player then guesses a letter that they think may appear in the word.
The computer checks whether the letter appears in the word and either reveals all instances of
it (if it exists) or takes away one of the player's lives. The computer then displays the progress
that the player has made towards guessing the word. The game continues until either all of the
letters have been guessed (and the player wins) or all of the player's lives are used up (and the
player loses). In either case, the computer should announce this event and the game should end.
You will add a list of 100 words in your program.
Example list of words “fast”, “programming”, “students”, “are”, “genius”. The max length of a
word will be 20.
You will be displaying one of the following figures after round.

Following additional rules will be used to play the game.
1. You will ask the player to input his/her name
2. If there is a common alphabet in the user’s name and the secret word
a. And the player gets it right, he/she will get an additional life. If he/she has not
previously lost any life he/she will not get any advantage

You must have a create function to create a list of words, draw function to show hangman, hangwoman,
decision function to show the result.


""""""""""""""""""""""""""""
DICE-ROLL SCORING GAME :-  "
""""""""""""""""""""""""""""

You are required to simulate a two-player dice rolling game using a C++ program. The program will
start and ask for the Complete Names and Roll Numbers of the two players playing the game. The
game has the following rules.
The players roll two 6-sided dice each and get points depending on what they roll. There are 5 rounds
in a game. In each round, each player rolled the dice twice.
1. The points rolled on each player’s dice are added to their score.
2. If the sum of the roll matches with the sum of last 2 digit of a player then the player gets
additional n points where n is the last digit of the Roll Number.
3. If the sum of the roll matches with m where m is index of the last alphabet of the name of
the player then player gets additional 5 points. (Index of A is 1, B is 2, C is 3 and so on. Index is
not casesensitive)
5. The person with the highestscore at the end of the 5 rounds wins.
6. If both players have the same score at the end of the 5 rounds, they each roll 1 die and
whoever gets the highest score wins (this repeats until someone wins).




