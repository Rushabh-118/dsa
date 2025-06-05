class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxCount = 1;
        for(int i=nums.size()-2;i>=0;i--) {
            if(nums[i] != nums[i+1]) {
                maxCount++;
                if(maxCount == 3) return nums[i];
            }  
        }
        return nums[nums.size() - 1];
    }
};