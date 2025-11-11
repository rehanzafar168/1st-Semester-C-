#include<iostream>
using namespace std;
int main(){
    string signal;
    cout<<"Enter the signal:\t";
    cin>>signal;
    if(signal=="green"){
        cout<<"You don't go";
    }
    else if(signal=="red"){
        cout<<"You go";
    }
    else if(signal=="yellow"){
        cout<<"Be ready to go slowly";
    }
    else{
        cout<<"Mazrat";
    }
    return 0;
}