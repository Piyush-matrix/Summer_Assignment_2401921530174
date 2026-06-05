class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int index;
        string s1=strs[0];
        string s2=strs[n-1];
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]) {
            index=i;
            break;
            }

        } return s1.substr(0,index);
        
    }
};
