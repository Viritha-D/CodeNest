#include<iostream>
using namespace std;
void fliparray(int arr[],int n){
int ans[n];
for(int i=n-1;i>=0;i--){
    ans[n-i-1]=arr[i];
}
for(int i=0;i<n;i++){
    arr[i]=ans[i];
}



}
int main(){
    int n=5;
 int arr[5]={2,3,4,5,6};
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

 fliparray(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

return 0;
}
