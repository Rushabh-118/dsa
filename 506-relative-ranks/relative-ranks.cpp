class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());
        vector<string> medal = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        unordered_map<int, string> rankMaping;
        for(int i=0;i<sortedScore.size();i++) {
            if(i<3) rankMaping[sortedScore[i]] = medal[i];
            else rankMaping[sortedScore[i]] = to_string(i+1);
        }
        vector<string> result;
        for(int s : score) result.push_back(rankMaping[s]);
        return result;
    }
};