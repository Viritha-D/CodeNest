#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter n: ";
 int n;
 cin>>n;
 cout<<"enter k: ";
 int k;
 cin>>k;

 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
int counti=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k){
            counti+=1;
        }
    }
}
cout<<counti;




return 0;
}
