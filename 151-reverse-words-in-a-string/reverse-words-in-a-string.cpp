class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int size = s.size();
        for(int i = 0; i<size; i++) {
            string temp;
            while(s[i] == ' ' && i<size) i++;
            while(s[i] != ' ' && i<size) {
                temp += s[i];
                i++;
            }
            if(temp.size() > 0) {
                if(ans.empty()) ans = temp;
                else ans = temp + " " + ans;
            }
        }
        return ans;
    }
};