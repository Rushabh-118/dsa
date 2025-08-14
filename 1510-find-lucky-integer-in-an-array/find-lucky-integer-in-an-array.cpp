class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int, int> map;
        for(auto x : arr) map[x]++;
        for(auto x : map) if(x.first == x.second) ans = max(ans, x.first);
        return ans;
    }
};