#include<iostream>
using namespace std;
int main(){
    
int a,b,c;
cout<<"Enter the 1st Number:";
cin>>a;
cout<<"Enter the 2nd Number:";
cin>>b;
cout<<"Enter the 3rd Number:";
cin>>c;
if(a+b>c && b+c>a && c+a>b){
    cout<<"The triangle is valid";
}
else {
    cout<<"Invalid";
}
return 0;

}