class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0, left =0; 
        unordered_map<char, int> map;

        for(int i=0;i<s.length() ; i++) {
            if(map.count(s[i]) == 0 || map[s[i]] < left) {
                map[s[i]] = i;
                maxlength = max(maxlength, i - left + 1);
            } else {
                left = map[s[i]] + 1;
                map[s[i]] = i;
            }
        }

        return maxlength;
    }
};