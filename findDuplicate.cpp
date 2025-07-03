class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        map<int,int>hash;
        for(int num:nums){
            hash[num]++;
        }
        for(auto &pair : hash){
            if(pair.second>1){
              ans=pair.first;
            }
        }
        return ans;
    }
};
