class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int n =columnTitle.length();

        for(char c : columnTitle) ans += pow(26,--n) * (c - 'A' + 1);

        return ans;
    }
};