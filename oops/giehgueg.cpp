#include<iostream>
#include<string>
using namespace std;
/*
using namespace std;
int main(){
    string x="hello";
  //  cin>>x;

    char a[10]='x';
    cout<<a;
}*/
int main(){
    struct blabla{
        int item;
    }ship;
    blabla apple;
    apple.item=100;
    ship.item=10;
    cout<<apple.item;
    cout<<ship.item;
    

}
