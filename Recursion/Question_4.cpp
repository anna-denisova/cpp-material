#include<iostream>

using namespace std;

int gcd(int x, int y){
    if(y == 0){
        return x;
    }else{
        return gcd(y, x%y);
    }

}

int main(){

    cout<<"Enter x: ";
    int x; cin>>x;
    cout<<"Enter y: ";
    int y; cin>>y;

    cout<<"GCD of "<<x<<" and "<<y<<" is: "<<gcd(x, y)<<"\n";
}
