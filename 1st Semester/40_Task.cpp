#include <iostream>
#include <fstream> //This is a library used to create txt file in your folder to save output.
using  namespace std;
int main ()
{
    ofstream file("student_data.txt");
    file<<"Rehan Zafar"<<endl;
    file<<"Mansoor Arshad"<<endl;
    file<<"Bilal Manzoor"<<endl;
    file<<"Abdullah Rashid"<<endl;
    file.close();
    return 0;
}