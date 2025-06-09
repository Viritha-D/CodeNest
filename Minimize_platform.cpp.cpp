#include<iostream>
using namespace std;
void sorting(int arr[],int n){
 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        int temp=arr[j];
        if(arr[j]>arr[j+1]){
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
 }


}

int minimize_platform(int arr[],int dep[],int n){
    int pcount=1;
    int pneeded=1;
    sorting(arr,n);
    sorting(dep,n);
    int i=1;
    int j=0;

   while(i<n&&j<n){
    if(arr[i]<=dep[j]){

        pneeded=pneeded+1;
        i++;
    }
    else{

        pneeded=pneeded-1;
        j++;
    }
    pcount= max(pneeded,pcount);
   }



   return pcount;
}
int main(){
int n;
cout<<"enter number of trains: ";
cin>>n;

int arr[n];
cout<<"enter arrival times: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int dep[n];
cout<<"enter depature times: ";
for(int i=0;i<n;i++){
    cin>>dep[i];
}
int ans=minimize_platform(arr,dep,n);
cout<<"minimum number of platforms are: "<<ans;




return 0;
}
