#include<iostream>
#include<vector>
using namespace std;
int main(){
  //  int x,y,res=0;
    int n;
   // cin>>x>>y;
   cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        res^=arr[i];
    }
    int temp=res;
    int index=0;
    while(temp>0){
        if(temp &1){
            break;
        }
        index++;
        temp = temp>>1;
    }
    int mask=(1<<index);
    vector<int> ar;
    for(int i=0;i<n;i++){
        if(arr[i]&mask){
            ar.push_back(arr[i]);
        }
    }
    int a=0;
    for(vector<int>::iterator i=ar.begin();i!=ar.end();i++){
        a^= (*i);
    }
    int b=res^a;
    cout<<a<<"\n"<<b;






}
//find 2 non repeating numbers in list