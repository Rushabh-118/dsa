class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for(int i=0;i<n-1;i++) if(arr[i] > arr[i+1]) count++;
        if(arr[0] < arr[n-1]) count++;
        if(count > 1) return false;
        return true;
    }
};