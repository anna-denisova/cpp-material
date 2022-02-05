/* 
Write a recursive function that finds the product of
first n integers: also known as n!
-> n! = n*(n-1)*(n-2)*...*1
*/

#include<iostream>

using namespace std;

int factorial(int n){
    
    if(n <= 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){

    int n;
    cout<<"Enter number : "; cin>>n;

    cout<<"Answer : "<<factorial(n)<<"\n";

    return EXIT_SUCCESS;
    
}
