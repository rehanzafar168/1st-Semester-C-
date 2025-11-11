#include<iostream>//preprocesser directive  
using namespace std;
int main(){
   int a;
   int b;
   int c;
   int d;
   a = 2;
   b = 3;  
   c = 4;
   d = a * b / c; // According to bodmas rule first solve multiply and second division
   // Left to Right
   cout<<"The answer is:"<<d<<endl;
//    cout<<6/4;
   
    return 0;
}