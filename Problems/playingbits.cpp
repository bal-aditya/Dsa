#include<iostream>
//#include<bits/stdc++.h> include all libraries

using namespace std;
int setbits(int k){
    int count1=0;
    while(k>0){
    count1 += (k&1);
    k=k>>1;}
    return count1;


}
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++){
        if((i&1)==0 && i<b){
            count+= 2*setbits(i)+1;
            i++;
            continue;
        }
        count+= setbits(i);
    }
    cout<<count;
    return 0;
}