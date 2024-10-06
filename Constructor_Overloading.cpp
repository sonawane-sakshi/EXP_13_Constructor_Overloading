//Sakshi Sonawane
//PRN:24070123505
#include <iostream>
using namespace std;
class Addition
{
   public:
   int sum(int a, int b)
   {
    return a+b;
   } 
   int sum(int a,int b, int c)
   {
    return a+b+c;
   }
   float sum(int a, float b)
   {
    return a+b;
   }
} ;
int main(void)
{
    Addition obj;
    cout<<obj.sum(20,15)<<endl;
    cout<<obj.sum(12,33,45)<<endl;
    cout<<obj.sum(132,23.44f)<<endl;
}
/*
**OUTPUT**
35
90
155.44
*/
