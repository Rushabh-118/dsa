class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> nums2 = nums;
        sort(nums.begin(),nums.end());
        int l = nums[nums.size()-1];
        int sl = nums[nums.size()-2];
        if(l >= 2*sl) 
            for(int i=0;i<nums2.size();i++) 
                if(nums2[i] == l) return i;
        return -1;
    }
};