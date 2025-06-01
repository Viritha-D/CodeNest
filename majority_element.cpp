class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans;
       map<int,int>hashmap;
       for(int i=0;i<n;i++){
        hashmap[nums[i]]++;
       }
       for( auto num:hashmap){
        if(num.second>(n/2)){
          ans=num.first;
        }

       }
       return ans;
    }
};
