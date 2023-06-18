#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
int count[32]={0};
    for(int i=0;i<n;i++){
        int numb=arr[i];
        int j=0;
        while(numb>0){
            count[j]+=(numb & 1);
            j++;
            numb=numb>>1;
        }
        }
        int ans=0;
       //   for(int k=0;k<32;k++){
       //cout<<count[k]<<"\n";}
    for(int i=0;i<32;i++){
        count[i]%=4;
        if(count[i]==1){
            ans+=(1<<i);
           // cout<<ans;
        }

    }
    cout<<ans;
}
//any unique numberssss
