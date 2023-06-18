#include<iostream>
using namespace std;
class blabla{
    public:
   // access specifiers public privaye or protected
   //default access modifier is private
   int a=10;


};
class greed{
    public:
    int a=20;
    int pow(){
        return a*a;
    }

};
int main(){
    greed a;
    cout<<a.pow();

}