#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number:\t";
    cin>>number;
    if(number>=50){
        cout<<"The student is Pass.";
}
else if(number<50){
    cout<<"The student is fail.";
}
return 0;
}