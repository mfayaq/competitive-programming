#include <bits/stdc++.h>
using namespace std;

int countSplitInv(int arr[],int left,int mid,int right) {
  int count=0;
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int L[n1],R[n2];
  for (int i = 0; i < n1; i++)
    L[i]=arr[left+i];
  for (int i = 0; i < n2; i++)
    R[i]=arr[mid+1+i];
    int i=left,j=mid,k=left;
  while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            count+=(mid-i);
        }
        k++;
    }
   while (i < n1)
   {
       arr[k] = L[i];
       i++;
       k++;
   }
   while (j < n2)
   {
       arr[k] = R[j];
       j++;
       k++;
   }
   return count;
  }

int divide(int arr[],int left,int right){
  int count=0;
  if (left < right) {
  int mid = left+(right-left)/2;
  int c1=divide(arr,left,mid);
  int c2=divide(arr,mid+1,right);
  count=c1+c2+countSplitInv(arr,left,mid,right);
  }
  return count;
}


int main() {
  int t,n;
  cin>>t;
  while (t--) {
    cin >> n;
    int a[n],result;
    for (int i = 0; i < n; i++) {
      cin>>a[i];
    }
    result=divide(a,0,n-1);
    cout << result << '\n';
  }
  return 0;
}
