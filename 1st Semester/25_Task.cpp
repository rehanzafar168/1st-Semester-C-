#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the Age:\t";
    cin>>age;
    if(age>20){
        cout<<"You are valid for driving ";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
  }
