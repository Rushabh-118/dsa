class Solution {
public:
void generate(vector<string> &ans, string s, int n, int l, int r){
        if (l == n && r == n) {
            ans.push_back(s);
            return;
        }
        if (l < n) {
            generate(ans, s + '(', n, l + 1, r);
        }
        if (l > r && r < n) {
            generate(ans, s + ')', n, l, r + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s = "(";
        generate(result,s,n,1,0);
        return result;
    }
};