#include<iostream>
using namespace std;
int main(){
int n=6;
int arr[n]={1,1,2,3,3,4};

int index=0;
for(int i=1;i<n;i++){
   if(arr[i]!=arr[index]){
    index++;
    arr[index]=arr[i];
   }
}
for(int i=0;i<=index;i++){
    cout<<arr[i]<<" ";
}




return 0;
}
