#include<iostream>
using namespace std;
int main(){
int arr[5]={7,12,9,11,3};
int n=5;
for(int i=0;i<n-1;i++){

    for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
            }
    }
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
}



return 0;
}
