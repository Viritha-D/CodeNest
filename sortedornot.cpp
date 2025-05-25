#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            return true;
        }
    }
    return false;
 }


}
int main(){

int n=4;
int arr[n]={3,8,9,10};
int ans =sorted(arr,n);
cout<<ans;


return 0;
}
