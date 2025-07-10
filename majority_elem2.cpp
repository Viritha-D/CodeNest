class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>hashmap;
        vector<int>ans;
        for(int i=0;i<n;i++){
            hashmap[nums[i]]++;
        }
        for(auto num:hashmap){
            if(num.second>(n/3)){
              ans.push_back(num.first);
            }
        }
      return ans;  
    }
};
