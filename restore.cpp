class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string newstr(n,' ');
        
        for(int i=0;i<n;i++){
            newstr[indices[i]]=s[i];
        }
        return newstr;
    }
};
