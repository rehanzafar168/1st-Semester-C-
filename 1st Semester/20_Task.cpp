#include<iostream>
#include<fstream>  //fstream is a library used to create txt file to save output
using namespace std;
struct marker{    
    string name;
    int price;
    string color; 
};
int main(){
    marker m1;
    cout<<"Enter marker name:\t"<<endl;
    getline(cin,m1.name);
    cout<<"Enter marker price:\t"<<endl;
    cin>>m1.price;
    cout<<"Enter marker color:\t"<<endl;
    cin>>m1.color;
    ofstream file("marker.txt",ios::app);
    file<<"Marker Name:"<<"\t"<<m1.name<<"\n"<<"Marker Price:"<<"\t"<<m1.price<<"\n"<<"Marker Color:"<<"\t"<<m1.color<<endl;
    file.close();
    return 0;
}