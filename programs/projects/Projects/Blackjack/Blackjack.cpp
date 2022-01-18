#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//Card method seems alright
class Card{
    private:
        int Val;
        string Suit;
        string Face;
    public:
        Card(){
            Val=0;
            Suit="";
            Face="";
        }
        //Making the Setters
        void setSuit(string Suit){
            this->Suit = Suit;
        }
        void setFace(string Face){
            this->Face = Face;
        }
        void setVal(int Val){
            this->Val = Val;
        }

        //Making the Getters
        string getSuit(){
            return this->Suit;
        }
        string getFace(){
            return this->Face;
        }
        int getVal(){
            return this->Val;
        }
        void printCard(){
                cout<<"Suit: "<<Suit<<endl;
                cout<<"Face: "<<Face<<endl;
                cout<<"Value: "<<Val<<endl;
                cout<<""<< endl;
        }
    };
class Deck
{
    private:
        Card deck[52];
        Card aDeck[26];
        Card bDeck[26];
        int rArr1[26];
        int rArr2[26];
        int count;
        int aCount;
        int bCount;
        int cCount;
        int sNum;
        int fNum;
      
        int temp;
        int random;
    public:
        Deck(){
        deck[52];
        aDeck[26];
        bDeck[26];
        rArr1[26];
        rArr2[26];
        count=0;
        aCount=0;
        bCount=0;
        cCount=51;
        sNum=0;
        fNum=0;
       
        temp = 0;
        random = 0;
        }
        void initialize(){
            for(int i=0; i<52; i++){
                sNum = i%4;
                fNum= i%13;
                if (sNum == 0){
                    deck[i].setSuit("Heart");
                }
                else if(sNum == 1){
                    deck[i].setSuit("Spade");
                }
                else if (sNum == 2){
                    deck[i].setSuit("Club");
                }
                else if (sNum == 3){
                    deck[i].setSuit("Diamond");
                }
                if (fNum == 0){
                    deck[i].setFace("2");
                    deck[i].setVal(2);
                }
                else if (fNum == 1){
                    deck[i].setFace("3");
                    deck[i].setVal(3);
                }
                else if (fNum == 2){
                    deck[i].setFace("4");
                    deck[i].setVal(4);
                }
                else if (fNum == 3){
                    deck[i].setFace("5");
                    deck[i].setVal(5);
                }
                else if (fNum == 4){
                    deck[i].setFace("6");
                    deck[i].setVal(6);
                }
                else if (fNum == 5){
                    deck[i].setFace("7");
                    deck[i].setVal(7);
                }
                else if (fNum == 6){
                    deck[i].setFace("8");
                    deck[i].setVal(8);
                }
                else if (fNum == 7){
                    deck[i].setFace("9");
                    deck[i].setVal(9);
                }
                else if (fNum == 8){
                    deck[i].setFace("10");
                    deck[i].setVal(10);
                }
                else if (fNum == 9){
                    deck[i].setFace("Jack");
                    deck[i].setVal(10);
                }
                else if (fNum == 10){
                    deck[i].setFace("Queen");
                    deck[i].setVal(10);
                }
                else if (fNum == 11){
                    deck[i].setFace("King");
                    deck[i].setVal(10);
                }
                else if (fNum == 12){
                    deck[i].setFace("Ace");
                    deck[i].setVal(11);
                }
    
            }
        }
        //Shuffle finished
        void shuffle()
        {
            //Split the master deck into two smaller/Equal decks 
            for(int i=0; i<52; i++){
                count=i%2;
                if (count==1){
                aDeck[aCount]=deck[i];
                aCount+=1;
                }
                else{
                bDeck[bCount]=deck[i];
                bCount+=1;
                }
            }
            aCount=0;
            bCount=0;
            //Make an array of indexes
            for (int i=0;i<26;i++){
                rArr1[aCount]=i;
                aCount+=1;
            }
            for (int i=0;i<26;i++){
                rArr2[bCount]=i;
                bCount+=1;
            }
            aCount=0;
            bCount=0;
            //Randomize the array of indexes
            srand(time(0));
            for(int i=0; i<52; i++){
                count=i%2;
                int random=rand()%26;
                if (count==1){
                    temp= rArr1[aCount];
                    rArr1[aCount]=rArr1[random];
                    rArr1[random]=temp;
                    aCount+=1;
                }
                else{
                    temp= rArr2[bCount];
                    rArr2[bCount]=rArr2[random];
                    rArr2[random]=temp;
                    bCount+=1;
                }
            }
            aCount=0;
            bCount=0;
            //Combine the smaller arrays into the master array using the array of indexes
             for(int i=0; i<52; i++){
                count=i%2;
                if (count==1){
                    deck[i]=aDeck[rArr1[aCount]];
                    aCount+=1;
                }
                else{
                    deck[i]=bDeck[rArr2[bCount]];
                    bCount+=1;
                }
            }
        }
        Card getCard(){
            Card temp;
            temp =deck[cCount];
            cCount=cCount-1;
            return temp;
            }
        Card peekCard(){
            return deck[cCount];
        }

        void PrintDeck(){
            for (int x=0; x<52; x++){
                deck[x].printCard();
            }
        }
        void PrintxCard(){
            deck[cCount].printCard();
        }
};
//finish player class
class Player{
    private:
        Card Hand[10];
        int count;
        int HandVal;
        int wallet;
        int temp;
        int bet;
        int x;
    public:
        Player(){
            Hand[3];
            count=0;
            HandVal=0;
            wallet=1000;
            temp=0;
            bet=0;
            x=0;
        }
        //started a bet method.
        void Bet(){
            cout<<"how much do you want to bet? "<<endl;
            cin>>x;
            bet=x;
        }
        void blackjack(){
            wallet=wallet+(bet*1.5);
        }
        void win(){
            wallet=wallet+(bet*2);
        }
        int getbet(){
            return (bet*2);
        }
        int getLostBet(){
            return bet;
        }
        void lose(){
            
            wallet=wallet-bet;
            if (wallet==0){
                cout<<"Bust!"<<endl;
            }
        }
        void addCard(Card myCard){
            Hand[count] = myCard;
            HandVal+=Hand[count].getVal();
            count+=1;
        }
        int getWallet(){
            return wallet;
        }
        int getHandVal(){
            return HandVal;
        }
        void ace(){
            HandVal+=1;
        }
        Card getHand(){
            return Hand[10];
        }
        void setHand(Card myHand[10]){
            Hand[10]= myHand[10];
        }
        void printHand(){
            for (int x=0; x<count; x++){
              Hand[x].printCard();
            }
        }
        void PrintBet(){
            cout<<"Bet:"<<endl;
            cout<<bet<<endl;
        }
        void PrintWallet(){
            cout<<"Wallet:"<<endl;
            cout<<wallet<<endl;
        }
        void printHandDealer(){
            for (int x=0; x<count-1; x++){
              Hand[x].printCard();
            }
            cout<<"Suit: "<<"XXX"<<endl;
            cout<<"Face: "<<"XXX"<<endl;
            cout<<"Value: "<<"XXX"<<endl;
            cout<<""<< endl;
        }
        void printTotal(){
                for (int x=0; x<count; x++){
                    HandVal+=Hand[x].getVal();
            }
       
        }
        void resetGame(){
            count=0;
            HandVal=0;
        }
        Card peekCard(int index){
            return Hand[index];
        }
        void changeCardValue(int index, int value){
            Hand[index].setVal(value);
        }        
        
       
        

};



//Main method logic
int main(){
    
    string H="";
    string B="";
    Player Dealer = Player();
    Player player = Player();
    Deck myDeck =Deck();
    int Ace=0;
    cout<< "The program has started"<<endl;
    myDeck.initialize();
    myDeck.shuffle();
//While loop only activates when the wallet is not empty and if B is not equal to "N" or "n" (No)
    while((player.getWallet()>0)&&(B!="N")&&(B!="n")){
        player.PrintWallet();
        player.Bet();
        Dealer.resetGame();
        player.resetGame();
        Dealer.addCard(myDeck.getCard());
        player.addCard(myDeck.getCard());
        Dealer.addCard(myDeck.getCard());
        player.addCard(myDeck.getCard());
        
        cout<<"Hand Preview"<<endl;
        player.printHand();
        //if the players first card is an ace, then they can choose to set it to one or 11
        if(player.peekCard(0).getFace()=="Ace"){
            cout<<"You got an ace, do you want it to be a 1 or 11?"<<endl;
            cin>>Ace;
            if (Ace==1){
                player.changeCardValue(0,1);
            }
        }
        if((player.peekCard(1).getFace()=="Ace")){
            cout<<"You got an ace, do you want it to be a 1 or 11?"<<endl;
            cin>>Ace;
            if (Ace==1){
                player.changeCardValue(1,1);
            }
        }
        //if you get a blackjack(you start with 21 and the dealer doesnt have 21)
        if ((player.getHandVal()==21)&&(Dealer.getHandVal()!=21)){
            cout<<"Dealer Hand:"<<endl;
            cout<<""<<endl;
            Dealer.printHand();
            cout<<""<<endl;
            cout<<"Player Hand:"<<endl;
            cout<<""<<endl;
            player.printHand(); 
            cout<<"BLACKJACK!!!"<<endl;
            cout<<""<<endl;
            player.blackjack();
            player.PrintWallet();
            cout<<"Player Value:"<<endl;
            cout<< player.getHandVal()<<endl;
            cout<<"Dealer Value:"<<endl;
            cout<< Dealer.getHandVal()<<endl;
        }
        //in a normal case (you dont have a blackjack)
        else{
            cout<<""<<endl;
            cout<<"Dealer Hand:"<<endl;
            cout<<""<<endl;
            Dealer.printHandDealer();
            cout<<""<<endl;
            if (Dealer.getHandVal()<=16){
                Dealer.addCard(myDeck.getCard());
            }
            cout<<"Player Hand:"<<endl;
            cout<<""<<endl;
            player.printHand(); 
            cout<<"(H)it or (S)tand"<<endl;
            cout<<""<< endl;
            //myDeck.PrintxCard();
            cout<<"------------------------"<< endl;
            cin>>H;
        
        
            //If you hit
            if ((H=="H")||(H=="h")){
                player.addCard(myDeck.getCard());
                if((player.peekCard(2).getFace()=="Ace")&&player.getHandVal()>11){
                    player.changeCardValue(2,1);
                }
                if((player.peekCard(2).getFace()=="Ace")&&player.getHandVal()<11){
                    cout<<"You got an ace, do you want it to be a 1 or 11?"<<endl;
                    cin>>Ace;
                    if (Ace==1){
                        player.changeCardValue(1,1);
                    }
                 }
                cout<<"Dealer Hand:"<<endl;
                cout<<""<<endl;
                Dealer.printHand();
                cout<<""<<endl;
                cout<<"Player Hand:"<<endl;
                cout<<""<<endl;
                player.printHand(); 
                
                //if the value of your cards is greater than 21 you loose
                if (player.getHandVal()>21){
                    player.lose();
                    cout<<"lose :("<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money lost:"<<endl;
                    cout<<player.getLostBet()<<endl;
                    player.PrintWallet();
                }
                //if the value of your cards are less than 21 and the value of your cards are the same as the dealers a "push" happens
                else if (player.getHandVal()<21 && player.getHandVal()==Dealer.getHandVal()){
                    cout<<"Push"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    player.PrintWallet();
                }
                //if the value of your cards is 21 you win
                else if (player.getHandVal()==21){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }
                //if the value of your cards is less than 21, and the value of your cards is greater than the dealers you win
                else if (player.getHandVal()<21 && player.getHandVal()>Dealer.getHandVal()){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }
                //if the value of your cards is less than 21 and the value of the dealers cards are greater than 21 you win
                else if (player.getHandVal()<21&&Dealer.getHandVal()>21){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }

                //if the dealers cards are greater than yours you loose
                else{
                    player.lose();
                    cout<<"lose :("<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Lost:"<<endl;
                    cout<<player.getLostBet()<<endl;
                    player.PrintWallet();
                }

            }
            
             //all of the same gates except a hit doesnt happen
            else{
                cout<<"Dealer Hand:"<<endl;
                cout<<""<<endl;
                Dealer.printHand();
                cout<<""<<endl;
                cout<<"Player Hand:"<<endl;
                cout<<""<<endl;
                player.printHand(); 
                
                if (player.getHandVal()>21){
                    player.lose();
                    cout<<"lose :("<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Lost:"<<endl;
                    cout<<player.getLostBet()<<endl;
                    player.PrintWallet();
                }
                else if (player.getHandVal()<21 && player.getHandVal()==Dealer.getHandVal()){
                    cout<<"Push"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    player.PrintWallet();
                }
                else if (player.getHandVal()==21){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }
                else if (player.getHandVal()<21&&Dealer.getHandVal()>21){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }
                else if (player.getHandVal()<21 && player.getHandVal()>Dealer.getHandVal()){
                    player.win();
                    cout<<"Win!!!"<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Won:"<<endl;
                    cout<<player.getbet()<<endl;
                    player.PrintWallet();
                }
               
                else{
                    player.lose();
                    cout<<"lose :("<<endl;
                    cout<<"Player Value:"<<endl;
                    cout<< player.getHandVal()<<endl;
                    cout<<"Dealer Value:"<<endl;
                    cout<< Dealer.getHandVal()<<endl;
                    cout<<"Money Lost:"<<endl;
                    cout<<player.getLostBet()<<endl;
                    player.PrintWallet();
                }
            }
        }
        //A play again option. Only activates if the player has something to bet (the players wallet is above zero)
        if(player.getWallet()>0){
            cout<<"Play again? (Y)es (N)o"<<endl;
            cin>>B;
        }
        
    }
}


    

/*
        if ((Deck[a].getFace()=="Ace")&&PSum>10){
            cout<<"Value: "<<" 1"<<endl;
        }
        else if ((Deck[a].getFace()=="Ace")&&PSum<=10){
            cout<<"Value: "<<"11 or 1"<<endl;
            }
        else{
            cout<<"Value: "<<Deck[a].getVal()<<endl;
         }*/
    

