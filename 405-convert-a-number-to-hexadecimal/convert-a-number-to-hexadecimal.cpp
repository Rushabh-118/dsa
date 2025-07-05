class Solution {
public:
    string toHex(int Num) {
        unsigned int num = static_cast<unsigned int>(Num);
        if(num == 0) return "0";
        const string digits = "0123456789abcdef";
        string ans;

        while (num > 0) {
            ans += digits[num % 16];
            num /= 16;
        }
        reverse(begin(ans), end(ans));

        return ans;
    }
};