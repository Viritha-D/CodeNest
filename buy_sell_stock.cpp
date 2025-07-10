class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sol=0;

        int minsofar=prices[0];
        for(int i=0;i<n;i++){
            minsofar=min(minsofar,prices[i]);
            sol=max(sol,prices[i]-minsofar);
        }
        return sol;
    }
};
