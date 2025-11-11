#include<iostream>
#include<fstream>  //fstream is a library used to create txt file to save output
using namespace std;
struct mobile{    
    string name;
    int price;
    int memory;
    int ram;
    string brand; 
};
int main(){
    mobile m1;
    cout<<"Enter mobile name:\t"<<endl;
    getline(cin,m1.name);
    cout<<"Enter mobile price:\t"<<endl;
    cin>>m1.price;
    cout<<"Enter mobile memory:\t"<<endl;
    cin>>m1.memory;
    cout<<"Enter mobile Ram:\t"<<endl;
    cin>>m1.ram;
    cout<<"Enter mobile brand:\t"<<endl;
    cin>>m1.brand;
    ofstream file("mobile.txt",ios::app); //ios is used to store previous data in txt file 
    file<<"Mobile Name:"<<"\t"<<m1.name<<"\n"<<"Mobile Price:"<<"\t"<<m1.price<<"\n"<<"Mobile Memory:"<<"\t"<<m1.memory<<"\n"<<"Mobile Ram:"<<"\t"<<m1.ram<<"\n"<<"Mobile brand:"<<"\t"<<m1.brand<<endl;
    file.close();
    return 0;
}