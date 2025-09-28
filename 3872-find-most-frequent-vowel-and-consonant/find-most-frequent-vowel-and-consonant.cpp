class Solution {
public:
    int maxFreqSum(string s) {
        int vowels = 0, constants = 0;
        int freq[26];
        for(auto ch : s) freq[ch - 'a']++;
        for(char i = 'a'; i<= 'z'; i++) {
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u') vowels = max(vowels,freq[i-'a']);
            else constants = max(constants, freq[i-'a']);
        }
        return vowels + constants;
    }
};