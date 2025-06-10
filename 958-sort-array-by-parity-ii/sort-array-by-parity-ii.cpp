class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd, res(nums.size());
        for (int num : nums) {
            if (num % 2 == 0) even.push_back(num);
            else odd.push_back(num);
        }

        int e = 0, o = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) res[i] = even[e++];
            else res[i] = odd[o++];
        }
        return res;
    }
};