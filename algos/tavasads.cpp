#include<iostream>
//#include<vector>
#include<string.h>
using namespace std;
int main(){
    string n;
    cin>>n;
  
    int temp=0;
    int ans=0;
    for (int i=0;i<n.size();i++){
        temp+=(1<<(i));
        if((n.substr(i,1))=="7"){
            ans+=(1<<(n.size()-(i+1)));
            cout<<"\n"<<ans;
}
}
cout<<ans+temp;
}