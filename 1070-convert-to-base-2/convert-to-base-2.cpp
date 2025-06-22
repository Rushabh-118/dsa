class Solution {
public:
    string baseNeg2(int n) {
        string ans = "";
        if(n==0) ans+="0";
        int a;
        while(n) {
            a = n%(-2);
            if(a < 0) {
                a += 2;
                n = n/(-2) + 1;
            } else n/=(-2);
            ans += (a+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};