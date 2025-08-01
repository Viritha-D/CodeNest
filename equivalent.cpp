class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string neww1="";
        string neww2="";
        
        for(int i=0;i<n;i++){
           neww1+=word1[i];
        }
        for(int i=0;i<m;i++){
           neww2+=word2[i];
        }
        if(neww1==neww2){
            return true;
        }
     return false;
    }
};
