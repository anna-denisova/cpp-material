#include<iostream>

//Solve by finding smallest common multiple
//between 1 .... n  

using namespace std;
//highest common factor
int hcf(int x, int y){
    if(y == 0){
        return x;
    }else{
        return hcf(y, x%y);
    }
}
//least common multiple
int fractorial(int x, int y){
    if(y == 1){
        return x;
    }else{
        x = (x*y)/hcf(x, y);
        y -= 1;
        return fractorial(x, y);
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    if(n<3){
        cout<<"Fractorial("<<n<<") = "<<n<<"\n";
    }else{
        cout<<"Fractorial("<<n<<") = "<<fractorial(n, n-1)<<"\n";
    }    
}
