class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        long long prev = 1, i = 1;
        res.push_back(prev);
        while(rowIndex > 0) {
            prev = (prev * rowIndex--) / i++;
            res.push_back(prev);
        }
        return res;
    }
};