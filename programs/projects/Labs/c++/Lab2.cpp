#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//1 1 2 3 5 8 13
class fib{
  public:
  fib(){
    
  }
  int alg(int n){
    if(n<2){
      return 1;
    }
    return alg(n-1)+alg(n-2);
  }
};
int main(){
    fib Fib;
    int listSize = 0;
    cout<<"How many fibbonacci numbers?"<<endl;
    cin>>listSize;
    int arr[listSize];
    
    for(int x=0;x<sizeof(arr)/sizeof(arr[0]);x++){
      arr[x]=Fib.alg(x);
    }
    for(int x=0;x<(sizeof(arr)/sizeof(arr[0]))-1;x++){
      cout<<arr[x]<<",";
    }
    cout << arr[listSize-1]<< endl << endl;
    
        
}