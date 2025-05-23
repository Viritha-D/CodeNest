#include<iostream>
using namespace std;

int main(){
    int n=5;
int arr[5]={7,15,3,12,9};
for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0&&arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}



return 0;
}
