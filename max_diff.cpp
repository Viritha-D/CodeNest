#include<iostream>
using namespace std;
int max_diff(int arr[],int n){
    int max_diff=0;
    int ans=0;
    for(int i=0;i<n;i++){
        ans=arr[i+1]-arr[i];
        max_diff=max(ans,max_diff);

        if(i==n-1){
            ans=arr[i]-arr[0];
            max_diff=max(ans,max_diff);
        }
    }



   return max_diff;
}
int main(){
      cout<<"enter n: ";
      int n;
      cin>>n;
     int arr[n];
     cout<<"enter elements into the array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

int sol=max_diff(arr,n);
cout<<"solution is: "<<sol;

return 0;
}
