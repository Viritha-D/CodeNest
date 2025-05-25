#include<iostream>
using namespace std;
int main(){
int arr[4]={8,43,98,1};
int maxi=arr[0];
for(int i=1;i<4;i++){
    if(maxi<arr[i]){
        maxi=arr[i];
    }
}
cout<<"maximum element is: "<<maxi;



}
