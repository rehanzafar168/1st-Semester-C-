#include<iostream>
using namespace std;
int main(){
    
int n;
cout<<"Enter a Number:\t";
cin>>n;
if(n%5==0 && n%3==0){
    cout<<"The number is divisible by 5 and 3.";
}
else {
    cout<<"Mazrat";
}
return 0;

}