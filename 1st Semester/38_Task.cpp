#include<iostream>
using namespace std;
struct laptop{    
    string name;
    int price;
    string color; 
};
int main(){
    laptop l1;
    cout<<"Enter Laptop name:\t"<<endl;
    getline(cin,l1.name);
    cout<<"Enter Laptop price:\t"<<endl;
    cin>>l1.price;
    cout<<"Enter Laptop color:\t"<<endl;
    cin>>l1.color;
   cout<<"Laptop deatil saved successfully.";
    return 0;
}