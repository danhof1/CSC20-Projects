#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Card{
    private:
        int sNum;
        int fNum;
        int Val;
        string Suit;
        string Face;
    public:
        Card(){
            int sNum=0;
            int fNum=0;
            int Val=0;
            string Suit="";
            string Face="";
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
    };
class deck{
   public:
        void Shuffle(Card deck[]){
            srand(time(0));
            for(int x=0; x<52;x++)
            {
                int random= rand()%52;
                //cout<< random <<endl;
                Card temp;
                temp=deck[x];
                deck[x]=deck[random];
                deck[random]=temp;
            }
        }
        Card Deal(Card deck[],int index){
            return deck[index];
        }

    };
/*class game{
    private:
        int y;
        int z;
        int a;
        int b;
    public:
        game(){
            int y=0;
            int z=0;
            int a=0;
            int b=0;
        }
        Card play(Card j[])
        {
            Card Dealer[52];
            Card Player[52];
            deck item;
            Card A;
            Card B;
            int a=0;
            int b=0;
            int c=1;
            int d=0;
            while ((y||z) < 21))
            { 
                A= item.Deal(j[c])
                B= item.Deal(j[d])
                Dealer[a]=A;
                Player[b]=B;
                a++;
                b++;
                c+=2;
                d+=2;
            }
        }
};*/
int main()
{
    Card Deck[52];
    Card PDeck[11];
    Card DDeck[11];
    int sNum=0;
    int fNum=0;
    int PSum=0;
    int DSum=0;    
    int a=0;
    int b=0;
    for(int i=0; i<52; i++){
        sNum = i%4;
        fNum= i%13;
        if (sNum == 0){
            Deck[i].setSuit("Heart");
        }
        else if(sNum == 1){
            Deck[i].setSuit("Spade");
        }
        else if (sNum == 2){
            Deck[i].setSuit("Club");
        }
        else if (sNum == 3){
            Deck[i].setSuit("Diamond");
        }

        if (fNum == 0){
            Deck[i].setFace("2");
            Deck[i].setVal(2);
        }
        else if (fNum == 1){
            Deck[i].setFace("3");
            Deck[i].setVal(3);
        }
        else if (fNum == 2){
            Deck[i].setFace("4");
            Deck[i].setVal(4);
        }
        else if (fNum == 3){
            Deck[i].setFace("5");
            Deck[i].setVal(5);
        }
        else if (fNum == 4){
            Deck[i].setFace("6");
            Deck[i].setVal(6);
        }
        else if (fNum == 5){
            Deck[i].setFace("7");
            Deck[i].setVal(7);
        }
        else if (fNum == 6){
            Deck[i].setFace("8");
            Deck[i].setVal(8);
        }
        else if (fNum == 7){
            Deck[i].setFace("9");
            Deck[i].setVal(9);
        }
        else if (fNum == 8){
            Deck[i].setFace("10");
            Deck[i].setVal(10);
        }
        else if (fNum == 9){
            Deck[i].setFace("Jack");
            Deck[i].setVal(10);
        }
        else if (fNum == 10){
            Deck[i].setFace("Queen");
            Deck[i].setVal(10);
        }
        else if (fNum == 11){
            Deck[i].setFace("King");
            Deck[i].setVal(10);
        }
        else if (fNum == 12){
            Deck[i].setFace("Ace");
            Deck[i].setVal(11);
        }
    
    }
    deck item;
    item.Shuffle(Deck);
    
    while ((PSum&&DSum)<21){
        cout<<""<<endl;
        if (a==0){
            PDeck[b]= item.Deal(Deck,a);
            PDeck[b+1]= item.Deal(Deck,a+2);

            PSum +=PDeck[b].getVal();
            PSum +=PDeck[b+1].getVal();

            DDeck[b]= item.Deal(Deck,a+1);
            DDeck[b+1]= item.Deal(Deck,a+3);

            DSum +=DDeck[b].getVal();
            DSum +=DDeck[b+1].getVal();

            b=b+2;
            a=a+4;

        }
        
        else{
            cout<<"My Hand"<<endl;
            cout<<""<< endl;
            cout<<"Current Value: "<<PSum<<endl;
            for (int y=0; y<b; y++){
                cout<<"Suit: "<<PDeck[y].getSuit()<<endl;
                cout<<"Face: "<<PDeck[y].getFace()<<endl;
                cout<<"Value: "<<PDeck[y].getVal()<<endl;
                cout<<""<< endl;
            }
            cout<<"Current Value: "<<DSum<<endl;
            cout<<"Dealer Hand"<<endl;
            cout<<""<< endl;
            for (int z=0; z<b; z++){
                cout<<"Suit: "<<DDeck[z].getSuit()<<endl;
                cout<<"Face: "<<DDeck[z].getFace()<<endl;
                cout<<"Value: "<<DDeck[z].getVal()<<endl;
                cout<<""<< endl;

            }
            
            string x=""; 
            int j =0;
            cout<<"Do you want this card? "<<endl;
            cout<<""<< endl;
            cout<<"Suit: "<<Deck[a].getSuit()<<endl;
            cout<<"Face: "<<Deck[a].getFace()<<endl;
            if ((Deck[a].getFace()=="Ace")&&PSum>10){
                cout<<"Value: "<<" 1"<<endl;
            }
            else if ((Deck[a].getFace()=="Ace")&&PSum<=10){
                cout<<"Value: "<<"11 or 1"<<endl;

            }
            else{
                cout<<"Value: "<<Deck[a].getVal()<<endl;
            }
            cout<<"--------------------------------------"<< endl;
            cin >> x;
            if (x=="Hit"){
                if ((Deck[a].getFace()=="Ace")&&(PSum>10)){
                        PDeck[b]=item.Deal(Deck,a);
                        DDeck[b]=item.Deal(Deck,a+1);
                        PSum+=1;
                        DSum +=DDeck[b].getVal();
                    }
                else if ((Deck[a].getFace()=="Ace")&&PSum<=10){
                    cout << "Do you want 1 or 11"<<endl;
                    cin >> j;
                    if (j==1){
                        PDeck[b]=item.Deal(Deck,a);
                        DDeck[b]=item.Deal(Deck,a+1);
                        PSum+=1;
                        DSum +=DDeck[b].getVal();
                    }
                    else{
                        PDeck[b]=item.Deal(Deck,a);
                        DDeck[b]=item.Deal(Deck,a+1);
                        PSum+=11;
                        DSum +=DDeck[b].getVal();
                    }
                }
                else
                {
                    PDeck[b]=item.Deal(Deck,a);
                    DDeck[b]=item.Deal(Deck,a+1);
                    PSum+=PDeck[b].getVal();
                    DSum +=DDeck[b].getVal();
                    a+=1;
                    b=b+1;
                }
           
            }
        }
       
        if ((PSum >21)||(DSum==21)||(DSum>PSum)){
            cout<<"Dealer Value: "<<DSum<<endl;
            cout<<"Player Value: "<<PSum<<endl;
            cout<<"Dealer Wins!"<<endl;
            break;
        }
        else if(DSum >21||(PSum==21)||(PSum>DSum)){
            cout<<"Player Value: "<<PSum<<endl;
            cout<<"Dealer Value: "<<DSum<<endl;
            cout<<"Player Wins!"<<endl;
            break;
        }
        a=a+1;
        }
       
    }

    
    
    //Test Card Card Class Main program
    /*for (int x=0; x<52; x++){
        cout<<x+1<<endl;
        cout<<"Suit: "<<Deck[x].getSuit()<<endl;
        cout<<"Face: "<<Deck[x].getFace()<<endl;
        cout<<"Value: "<<Deck[x].getVal()<<endl;
        cout<<""<< endl;
    }*/

    

