#include<iostream>
#include<fstream>
using namespace std;
struct papsi{
        string brand;
        string md_name;
        int count;
        char level;
};
int main (){
         papsi p1;
         cout<<"Enter papsi brnd :";
         getline(cin,p1.brand);
         cout<<"Enter manager name :";
         getline(cin,p1.md_name);
         cout<<"Enter the number :";
         cin>>p1.count;
         cout<<"Enter the level :";
         cin>>p1.level;
         cout<<"Papsi detail saved successfully.";
         ofstream file("papsi.txt",ios::app);
         file<<"Brand Name :"<<"\t"<<p1.brand<<"\n"<<"Manager Name :"<<"\t"<<p1.md_name<<"\n"<<"Count :"<<"\t"<<p1.count<<"\n"<<"Level :"<<"\t"<<p1.level<<endl;
         file.close();
        return 0;

}