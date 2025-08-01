class Solution {
public:
    string defangIPaddr(string address) {
        string ip="";
        int n=address.size();
        for(int i=0;i<n;i++){
            if(address[i]!='.'){
                ip+=address[i];
            }
            else if(address[i]=='.'){
                string val="[.]";
                ip+=val;
            }
        }

        return ip;
    }
};
