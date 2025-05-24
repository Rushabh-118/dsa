class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> map;
        vector<vector<int>> vec;
        for(auto i:nums1) map[i[0]] += i[1];
        for(auto i:nums2) map[i[0]] += i[1];
        for(auto i:map) vec.push_back({i.first,i.second});
        sort(vec.begin(),vec.end());
        return vec;
    }
};