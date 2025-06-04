#include<iostream>
using namespace std;
int maxprofit(int arr[],int n){
    int result=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            result=max(result,arr[j]-arr[i]);
        }
    }
    return result;
}

int main(){
    int arr[]={7,1,5,3,6,4};
   int result= maxprofit(arr,6);
   cout<<result;
}
