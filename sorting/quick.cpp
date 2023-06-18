#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=0;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[r]);
    return i+1;
    
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

    }

}


int main(){
        int arr[]={3,5,1,2,4,6};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";}
}




//last element pivot