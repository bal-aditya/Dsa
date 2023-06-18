#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> perm;
    for(int i=0;i<n;i++){
        perm.push_back(i+1);
    }
    do{
        for(int i=0;i<n;i++){
            cout<<perm[i];
        }
        cout<<"\n";
    }while(next_permutation(perm.begin(),perm.end()));

    return 0;
}