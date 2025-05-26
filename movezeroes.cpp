#include<iostream>
using namespace std;
int main(){
    int n=8;
int arr[n]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
int newarr[n];
int index=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        newarr[index++]=arr[i];
    }
}
while(index<n){
    newarr[index++]=0;
}
for(int i=0;i<n;i++){
    cout<<newarr[i]<<" ";
}




return 0;
}
