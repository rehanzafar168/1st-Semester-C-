#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct library_info{
          string title;
          string author;
          string genre;
          int add_newbooks;
          int available_books;
};
int main(){
    library_info L1;
    cout<<"Enter the book title :"<<endl;
    getline(cin,L1.title);
    cout<<"Enter the Author Name :"<<endl;
    getline(cin,L1.author);
    cout<<"Enter the Genre :"<<endl;
    getline(cin,L1.genre);
    cout<<"Add New Books :"<<endl;
    cin>>L1.add_newbooks;
    cout<<"Available Books :"<<endl;
    cin>>L1.available_books;
     
           ofstream file("library_info.txt",ios::app);
           file<<"Book Title :"<<"\t"<<L1.title<<"\n"<<"Aurthor Name :"<<"\t"<<L1.author<<"\n"<<"Genre :"<<"\t"<<L1.genre<<"\n"<<"Add New Books :"<<"\t"<<L1.add_newbooks<<"\n"<<"Available Books :"<<"\t"<<L1.available_books<<endl;
           file.close();
           return 0;

}