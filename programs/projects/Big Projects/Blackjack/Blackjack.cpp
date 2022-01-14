#include<iostream>
#include <cstdlib>
#include <ctime>
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
        void PrintDeck(){
            for (int x=0; x<52; x++){
                deck[x].printCard();
            }
        }
};
//finish player class
class Player{
    private:
        Card Hand[10];
        int count;
        int HandVal;
    public:
        Player(){
            Hand[10];
            count=0;
            HandVal=0;
        }
        //started a bet method.
        int bet(){
            int x=0;
            cout<<"how much do you want to bet? "<<endl;
            cin>>x;
            return x;
        }
        void addCard(Card myCard){
            Hand[count] = myCard;
            count+=1;
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
        void printTotal(){
                for (int x=0; x<count; x++){
                    HandVal+=Hand[x].getVal();
            }
        }
        

};

//have to create main method logic
int main(){
    Player Dealer = Player();
    Player player = Player();
    Deck myDeck =Deck();
    myDeck.initialize();
    myDeck.shuffle();
    //int bet= player.bet();
    cout<< "The program has started"<<endl;

    Dealer.addCard(myDeck.getCard());
    player.addCard(myDeck.getCard());
    Dealer.addCard(myDeck.getCard());
    player.addCard(myDeck.getCard());
    
    cout<<""<<endl;
    cout<<"Dealer Hand:"<<endl;
    cout<<""<<endl;
    Dealer.printHand();
    cout<<""<<endl;
    cout<<"Player Hand:"<<endl;
    cout<<""<<endl;
    player.printHand(); 
}
