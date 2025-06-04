#include<iostream>
using namespace std;
void plusone(int arr[],int n){

    for(int i=0;i<n;i++){

          if(i==n-1){
        cout<<arr[i]+1;

    }
    else{
        cout<<arr[i]<<",";
    }
    }
}
int main(){
    int arr[3]={3,4,5};
    plusone(arr,3);

    return 0;
}
