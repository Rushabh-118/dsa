class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int size = num.size() - 1;

        while (size >= 0 || k > 0) {
            if (size >= 0) {
                k += num[size];
                size--;
            }
            result.push_back(k % 10);
            k /= 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};