class Solution {
  public:
    void sort012(vector<int>& arr) {
        vector<int>zero;
        vector<int>one;
        vector<int>two;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zero.push_back(0);
            }
            else if(arr[i]==1){
                one.push_back(1);
            }
            else{
                two.push_back(2);
            }
        }
        int idx=0;
        for(int i=0;i<zero.size();i++){
            arr[idx++]=zero[i];
        }
        for(int i=0;i<one.size();i++){
            arr[idx++]=one[i];
        }
        for(int i=0;i<two.size();i++){
            arr[idx++]=two[i];
        }
        
    }
};
