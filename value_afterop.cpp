class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int initial=0;
        int arrsize=operations.size();
        for(int i=0;i<arrsize;i++){
            if(operations[i]=="--X"||operations[i]=="X--"){
                initial-=1;
            }
            else{
                initial+=1;
            }
        }
        return initial;
    }
};
