#include<iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Sieve{
    private:
        int size;
        long int *list;
    public:
    
    Sieve(){
        size=0;
        list=NULL;
    }
    //1) create the list
    Sieve(int size){
        list= new long int(size);
        this->size = size;
        //Fill the list from 1 to size

        for(int i=0; i<size;i++){
            list[i] =i+1;
        }
    }
    //3) 
    void runAlgorithm(){
         if (size <= 2){
             cout<<"error your list is too small"<<endl;
         }
         else{
            
            int divisor = list[1];
            int maxNumber = (int)floor(sqrt(size));
            int count=0;
            for(int i=2; i< size; i++){
                if (list[i]%divisor==0){
                    count+=1;
                }
                else if (count==0){
                    
                }
            }

         }
         

    }
    //2) create this function to print the list
    //for debugging purposes.
    void printList(){
        for(int i=0; i < size; i++){
            cout<< list[i] << ",";
        }
        cout << list[size-1]<< endl << endl;
    }
    



    void printPrimes(){
      
    }

    //Extra
    void printComposites(){

    }
    void resetList(int size){
        
    }

}

int main(){
    Sieve sieve = Sieve(20);
    sieve.printList();
    sieve.runAlgorithm();
    sieve.printList();
}