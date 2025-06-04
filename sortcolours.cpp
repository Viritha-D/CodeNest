#include<iostream>
#include<vector>
using namespace std;
void sortcolours(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
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
    sortcolours(nums1);
    cout<<"sorted colours array";
    for(int i=0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
    }
    return 0;
}
