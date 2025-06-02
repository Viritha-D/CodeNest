#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter integers into the array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"elements into the array are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}
// The value of x is now 6 (no longer 5)

