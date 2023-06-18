#include<iostream>
using namespace std;
int main(){
  //  cout<< (~10011);
    int n=10,count=0;
    if(n &1){
    cout<<"odd";
    }
    else{
        cout<<"even";
    }
    int a=11,b=15;
    int x=a^b;
    cout<<" "<<x;
    while(x>0){
         count+=(x&1);
         x=x>>1;
    }
    cout<<" "<<count<<" ";
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b;
    int m=13;
    cout<<(m&(1));
    cout<<"\n"<<(100&1);

     


}
//x<<y ===== x*   2**y
// given numbers 1 1 2 2 3 3 4 5 5 find the single time repating number
//use xor
