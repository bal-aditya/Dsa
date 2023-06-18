#include<iostream>
using namespace std;
int main(){
    long long int a;
    cin >>a;
    while(a!=1){
        if (a%2==0){
            a=a/2;
            cout << a;
        }
        else{
            a=a*3 +1;
            cout<<a;
        }
    }
    string s;
    getline(cin,s);
    cout<<s;
}