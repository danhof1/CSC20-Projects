#include<iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Sieve{
    public:
    Sieve(){
        
    }
    void initialize(int n,bool arr[]){
        for(int x=0;x<n+1;x++){
            arr[x]=true;
        }
    }
    //3) 
    void runAlgorithm(int n,bool arr[]){
         if (n <= 2){
             cout<<"error your list is too small"<<endl;
         }
         else
         {
            //Do in the range floor(sqrt(size))
            for (int p = 2; p*p <= n; p++)
            {
                // If arr[p] is not changed, then it is a prime
                if (arr[p] == true)
                    {
                        // Update all multiples of p
                        for (int i = p*2; i <= n; i += p)
                            arr[i] = false;
                    }
            }

         }
         

    }
    //2) create this function to print the list
    //for debugging purposes.
    void printList(int n){
        for(int i = 1; i < n; i++){
            cout<< i << ",";
        }
        cout << n << endl << endl;
    }
    
    //print the prime numbers 
    void printPrimes(int n,bool arr[]){
       for (int p = 2; p <= n; p++){
            if (arr[p])
                cout << p << " ";
       }
    }

    //Extra
    void printComposites(){

    }
    void resetList(int size){
        
    }

};

int main(){
    Sieve sieve;
    int listSize = 0;
    cout<<"How long is your Sieve list?"<<endl;
    cin>>listSize;
    bool* arr= new bool[listSize];
    sieve.initialize(listSize,arr);
    sieve.runAlgorithm(listSize,arr);
    sieve.printList(listSize);
    cout<<""<<endl;
    sieve.printPrimes(listSize,arr);
    cout<<""<<endl;
    delete[] arr;
};
