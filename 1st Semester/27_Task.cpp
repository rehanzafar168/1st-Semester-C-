#include<iostream>
#include<fstream>
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
   ofstream file("laptop.txt",ios::app); // Ofstream is used to store output in txt file and create txt file.
   file<<"Laptop Name:"<<"\t"<<l1.name<<"\n"<<"Laptop price:"<<"\t"<<l1.price<<"\n"<<"Laptop Color:"<<"\t"<<l1.color<<endl;
   file.close();
    return 0;
}