#include<iostream>
#include<string.h>
#include<bitset>
using namespace std;
int main(){
    char s[200];
    cin>>s;
    int n=strlen(s);
    int noofsub=(1<<n)-1;
    cout<<"{ }\n";
    for(int i=1;i<=noofsub;i++){
        int temp=i, j=0;
        while(temp>0){
            if(temp&1){
                cout<<s[j];
            }
            j++;
            temp=temp>>1;
        }
        cout<<"\n";
    }
    string str="1001010101";
    bitset<10>brr(str);
    cout<<brr[2];




}