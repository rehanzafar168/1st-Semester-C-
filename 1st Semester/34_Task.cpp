#include<iostream>
using namespace std;
struct student_data{
    string name;
    int roll_no;
    float cgpa;
};
int main(){
    student_data s1;
    s1.name = "Fahad";
    s1.roll_no = 19;
    s1.cgpa = 3.5;

    cout<<"Name :"<<"\t"<<s1.name<<"\n"<<"Roll No :"<<"\t"<<s1.roll_no<<"\n"<<"CGPA :"<<"\t"<<s1.cgpa<<endl;
    return 0;
}