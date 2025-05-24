class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<vector<int>> v(n);
        for (auto &qr : queries) v[qr[0]].push_back(qr[1]);
        priority_queue<int> pq;  
        priority_queue<int, vector<int>, greater<int>> pq2;  
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int r : v[i]) pq.push(r);
            while (!pq2.empty() && pq2.top() < i) pq2.pop();
            int temp = nums[i] - (int)pq2.size();
            while (temp-- > 0) {
                while (!pq.empty() && pq.top() < i) pq.pop();
                if (pq.empty()) return -1;
                pq2.push(pq.top());
                pq.pop();
                count++;
            }
        }
        return m - count;
    }
};