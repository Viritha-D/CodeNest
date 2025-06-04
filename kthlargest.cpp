#include<iostream>
#include<vector>
using namespace std;
void largest(vector<int>&nums1,int k){
    for(int i=0;i<nums1.size()-1;i++){
        for(int j=0;j<nums1.size()-i-1;j++){
            if(nums1[j]>nums1[j+1]){
                int temp=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=temp;
            }
        }
    }
   cout<<"the kth largest element is: "<<nums1[nums1.size()-k];
}
int main(){
    cout<<"enter the number of elements: ";
    int n;
    cin>>n;
    vector<int>nums1(n);
    cout<<"enter elements into the array: ";
    for(int i=0;i<nums1.size();i++){
            cin>>nums1[i];
    }
    cout<<"enter the value of k: ";
    int k;
    cin>>k;
    largest(nums1,k);
}
