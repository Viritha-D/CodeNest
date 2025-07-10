// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                   int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                }
            }
        }
        int ans=arr[k-1];
        return ans;
        
    }
};
