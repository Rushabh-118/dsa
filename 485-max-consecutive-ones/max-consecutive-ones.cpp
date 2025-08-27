class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, count = 0;
        for(int n : nums) {
            if(n==0) count = 0;
            else count++;
            if(ans < count) ans = count;
        }
        return ans;
    }
};