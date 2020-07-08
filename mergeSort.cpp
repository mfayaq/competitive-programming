#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int l_size = mid-left+1;
    int r_size = right-mid;    
    
    int Left[l_size];
    int Right[r_size];
    
    for(int i=0;i<l_size;i++)
        Left[i] = arr[left+i];
    for(int i=0;i<r_size;i++)
        Right[i] = arr[i+mid+1];
        
    int i=0,j=0;
    int k=left;
    
    while(i<l_size&&j<r_size){
        if(Left[i]<Right[i]){
            arr[k] = Left[i];
            i++;
        }
        else{
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    
    while(i<l_size){
        arr[k] = Left[i];
        i++;
        k++;
    }
    
    while(j<r_size){
        arr[k] = Right[i];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
    if(left<right){
    int mid = left+(right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
    }
}

int main(){
    int arr[] = {2,7,4,9,3,5,1};
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
        cout<<"\n";    
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
