class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        string temp = "";
        for(auto x : s){
            if(x == ' '){
                if(temp.size() > 0) count++;
                temp = "";
            }else temp += x;
        }
        if(temp.size()>0) count++;
        return count;
    }
};