#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> subset){
    for (int i=0;i<subset.size();i++){
       cout <<subset[i]<<" ";
    }
    cout<<"\n";
}
void search(vector<int> subset,int n,int k){
    if(k==n+1){
        print(subset);
    }
    else{
        subset.push_back(k);
        search(subset,n,k+1);
        subset.pop_back();
        search(subset,n,k+1);


    }
}
int main(){
vector<int> subset;
int n;
cout<<"no of elemnts in set";
cin>>n;
search(subset,n,1);
return 0;

}