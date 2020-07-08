#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,n;
  cin>>t;
  while (t--) {
    cin>>n;
    long arr[n];
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
      arr[i]*=arr[i];
    }
    sort(arr,arr+n);
   int cur_largest=n-1,right=cur_largest-1,left=0;
   while(1){
     if(cur_largest==1){
       cout<<"No"<<"\n";
       break;
     }
     if(arr[cur_largest]==arr[right]+arr[left]){
       cout<<"Yes"<<"\n";
       break;
     }
     else if(arr[cur_largest]>arr[right]+arr[left]){
       left++;
     }
     else{
       right--;
     }
     if(left>=right){
       cur_largest--;
       left=0;
       right=cur_largest-1;
     }
   }
  }
  return 0;
}
