#include <iostream>
#include <fstream>
using  namespace std;
int main ()
{
    ofstream file("deleteh.txt");
    file<<"Rehan Zafar"<<endl;
    file<<"Mansoor Arshad"<<endl;
    file<<"Bilal Ayub"<<endl;
    file<<"Hussam ishtiaq"<<endl;
    file.close();
    return 0;
}