#include <iostream>

using namespace std;

int fib(int n){
    if(n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }

}

int main(){
    cout<<"Enter element position : \n";
    int n; cin>>n;

    cout<<"Value : "<<fib(n)<<"\n";
}