#include<iostream>
#include<vector>
using namespace std;
bool issafe(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }

    }
    
    if((arr[x-1][y-1] ==1)&& (arr[x-1][y+1]==1)){
            return false;
        }
    
   return true; 
}
void search(int y) {
 if (y == n) {
   count++;
   return;
  }
for (int x = 0; x < n; x++) {
    if (col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
    col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
    search(y+1);
    col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    backtracking(a,n,0);

}