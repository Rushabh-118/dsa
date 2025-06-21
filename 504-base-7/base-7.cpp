class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";

        bool is_n = num < 0;
        num = abs(num);
        string res = "";
        while(num>0) {
            res += to_string(num%7);
            num/=7;
        }
        if(is_n) res += '-';
        reverse(res.begin(),res.end());
        return res;
    }
};