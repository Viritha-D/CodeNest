#include<iostream>
using namespace std;
int main(){
int arr[5]={7,12,9,11,3};

for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        int minindex=i;
            if(arr[minindex]>arr[j]){
            minindex=j;
            }
        if(minindex!=i){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
}
}

