class Solution {
public:
    bool issame(int freq[], int windowfreq[]) {
        for(int i = 0; i < 26; i++) {
            if(freq[i] != windowfreq[i]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(s.size() < p.size()) return ans;

        int freq[26] = {0};
        int windowfreq[26] = {0};

        for(char ch : p) {
            freq[ch - 'a']++;
        }

        int k = p.size();

        // First window
        for(int i = 0; i < k; i++) {
            windowfreq[s[i] - 'a']++;
        }

        if(issame(freq, windowfreq))
            ans.push_back(0);
        for(int i = k; i < s.size(); i++) {
            windowfreq[s[i] - 'a']++;         
            windowfreq[s[i - k] - 'a']--;    

            if(issame(freq, windowfreq))
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
