#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> perm){
    for(int i=0;i<(int)perm.size();i++){
        cout<<perm[i]<<" ";
    }
    cout<<"\n";
}
void search(vector<int> perm,bool chosen[],int n){
    if((int)perm.size() ==n){
        print(perm);
    }
    else{
        for(int i=1;i<=n;i++){
            if(!chosen[i]){
            chosen[i]=true;
            perm.push_back(i);
            search(perm,chosen,n);
            chosen[i]=false;
            perm.pop_back();
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> perm;
    bool chosen[n+1];
    search(perm,chosen,n);
    return 0;
}
//not workinhhh 
//cry in corner