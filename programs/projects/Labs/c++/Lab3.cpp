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
        
    }
    void initialize(int n,bool arr[]){
        arr[n+1];
        for(int x=0;x<sizeof(arr)/sizeof(arr[0]);x++){
            arr[x]=true;
        }
    }
    //3) 
    void runAlgorithm(int size,bool arr[]){
         if (size <= 2){
             cout<<"error your list is too small"<<endl;
         }
         else
         {
            for (int p=2; p*p<=size; p++)
            {
                // If prime[p] is not changed, then it is a prime
                if (arr[p] == true)
                    {
                        // Update all multiples of p
                        for (int i=p*2; i<=size; i += p)
                        arr[i] = false;
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
    


    //print the prime numbers 
    void printPrimes(bool arr[]){
       for (int p=2; p<=sizeof(arr)/sizeof(arr[0]); p++){
            if (arr[p])
                cout << p << " ";
       }
    }

    //Extra
    void printComposites(){

    }
    void resetList(int size){
        
    }

}

int main(){
    Sieve sieve;
    int listSize = 0;
    cout<<"How long is your Sieve list?"<<endl;
    cin>>listSize;
    bool arr[listSize];
    sieve.initialize(listSize,arr[listSize]);
    sieve.runAlgorithm(listSize,arr[listSize]);
    sieve.printPrimes(arr[listSize]);
};