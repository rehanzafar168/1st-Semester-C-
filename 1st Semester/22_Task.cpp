#include <iostream>
#include <fstream>
using  namespace std;
int main ()
{
    ofstream file("file.txt");
    file<<"Rehan Zafar";
    //ofstream(function or class)is use for creating file and storing data 
    //ifstream is used for exiting data from file and ofstream is used for including data in file
    file.close();
    return 0;
}