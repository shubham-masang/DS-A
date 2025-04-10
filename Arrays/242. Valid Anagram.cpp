class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s.size() != t.size())
        //     return false;
        // int n = s.size();
        // for (int i = 0; i < n; i++) {
        //     if (s[i] != t[i])
        //         return false;
        // }
        // return true;
        ///////////////////////////////////////////////////////////////////////
        if (s.size() != t.size())
            return false;

        // unordered_map<char, int> count;

        // // Count the frequency of characters in string s
        // for (auto x : s) {
        //     count[x]++;
        // }

        // // Decrement the frequency of characters in string t
        // for (auto x : t) {
        //     count[x]--;
        // }

        // // Check if any character has non-zero frequency
        // for (auto x : count) {
        //     if (x.second != 0) {
        //         return false;
        //     }
        // }
        // return true;
        ////////////////////////////////////////////////////////////////////
        int count[26] = {0};
        
        // Count the frequency of characters in string s
        for (char x : s) {
            count[x - 'a']++;
        }
        
        // Decrement the frequency of characters in string t
        for (char x : t) {
            count[x - 'a']--;
        }
        
        // Check if any character has non-zero frequency
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};
