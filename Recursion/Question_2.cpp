#include<iostream>

using namespace std;

//a
int a(int i){

    if(i == 1){
        return 3;
    }else{
        return a(i-1)-2;
    }

}

//-------------------------------------------------------

//b
int b(int i){
    if(i == 1){
        return -1;
    }else{
        return 2*b(i-1);
    }
}

int main(){

    cout<<"_________________________\nPART A\n";
    cout<<"Up to how many terms : \n";
    int n; cin>>n;
    
    cout<<"Sequence:\n";
    for(int i = 1; i<=n; ++i){cout<<a(i)<<"\t";}
    cout<<"\n";

    //--------------------------------------------------

    cout<<"_________________________\nPART B\n";
    cout<<"Up to how many terms : \n";
    cin>>n;
    
    cout<<"Sequence:\n";
    for(int i = 1; i<=n; ++i){cout<<b(i)<<"\t";}
    cout<<"\n";
    


}