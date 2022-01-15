# CSC20-Projects
Project 1
Blackjack

Project Description
For this project, the student will make a blackjack game.  The blackjack card game is a card game where each player will try to get to the value of 21 with their cards.  
There are only going to be two players, the dealer and one player.  Each player is delt two cards (normally one down and the other up (Not needed for this project.  Both should be up)).  The player will then decide whether they would like to get another card to increase their hand value.  
A winning hand is a hand that is the closest to 21 or a hand that does not go over 21.
A losing hand (Automatically) is if the hand goes over 21 or a hand that is not the closest to 21.

Card values are the following
2 value: 2, 3 value 3, 4 value 4 ……. 10 value 10.  All face cards (king, queen, jack) have a value of 10.  The Ace has a value of 1 or 11.

Example Output:

Dealer Hand:
A of Hearts  – 2 of Spades
Player Hand:
J of Clubs  - 8 of Hearts

Choice (H)it, (S)tay: H

Dealer Hand:
A of Hearts  – 2 of Spades
Player Hand:
J of Clubs  - 8 of Hearts – 10 of Diamonds

Dealer Wins!!!!!

Want to play again (y/n)?

Project Details
The project will contain 3 classes.
1.	Card Class
a.	Contain the following private attributes
i.	Suit Diamond, Club, Heart or Spade.
ii.	Face (What appears on the face, 2, K, A etc.
iii.	Value , the value of the card
b.	Contain the following methods
i.	All getter and setters for all the attributes
ii.	A default constructor
iii.	A print method, for debugging
2.	A deck class
a.	Contain the following attributes
i.	An array of cards called deck.
ii.	The length of the deck
b.	Contain the following methods
i.	Default constructor – creates a deck of unique cards
ii.	All getter and setter methods
iii.	A shuffle method Splits the deck into two mini decks and randomly places the cards back into the main deck.
iv.	A print method for debugging
v.	A deal method.
3.	A Game class
a.	Contain the following attributes
i.	Dealer Hand (Array of cards)
ii.	Dealer Value (value of hand)
iii.	Player Hand (Array of cards)
iv.	Player value (value of hand)
b.	All methods that are going to be needed to play the game.
4.	A main program class (Main method)

Lab 2


Fibonacci numbers


Background:
Fibonacci numbers appear a lot in science, nature, math and computer science.  It is a sequence that is generated by starting with the numbers 1,1 within the list. The next number within the list will be generated by the sum of the previous 2.  For example, the following is a sequence of 5 Fibonacci numbers.
{1,1,2,3,5}  

Project:
You must write a program to ask the user to input a size of the list to generate.  The program will not allow a size to be less than 2.  The program must give appropriate feedback to the user if the size entered is less than 2 and allow them to try again.  

Once the program is give the size n from the user, the program must generate a list of Fibonacci numbers of that size. 

Sample:
Please enter the size of the Fibonacci sequence: 8
{1,1,2,3,5,8,13,21}

Sample 2:
Please enter the size of the Fibonacci sequence: 1
That is invalid, please try a number greater or equal to 2
