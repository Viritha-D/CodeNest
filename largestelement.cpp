#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter elements into the array"<<"\n";
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"elements in the array are ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }


    return 0;
}
