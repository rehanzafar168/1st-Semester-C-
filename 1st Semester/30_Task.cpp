#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price:";
    cin>>cp;
    int sp;
    cout<<"Enter the salling price:";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"Loss is "<<cp-sp;
    }
    else{
        cout<<"No Profit No Loss";
    }
return 0;
}