class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<=haystack.length() - needle.length() ; ++i) {
            if (needle.empty()) return 0;
            if (needle.length() > haystack.length()) return -1;
            if(haystack.substr(i , needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};