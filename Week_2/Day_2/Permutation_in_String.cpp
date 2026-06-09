class Solution {
public:
    bool isfreqsame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        } return true;
    } 
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        } 
        int windowsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windowindx=0;
            int index=i;
            int freq2[26]={0};
            while(windowindx<windowsize && index<s2.length()){
                freq2[s2[index]-'a']++;
                windowindx++;
                index++;
            }
            if(isfreqsame(freq,freq2)) return true;
        } return false;
        
    }
};
