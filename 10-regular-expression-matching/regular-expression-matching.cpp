class Solution {
public:
    bool isMatch(string s, string p) {
        return match(s,p,s.length()-1,p.length()-1);
    }

    bool match(string& s, string& p, int i,int j) {
        if(i == -1 && j == -1) return true;
        else if(i >= 0 && j >= 0) {
            char cS = s[i];
            char cP = p[j];

            if(cP != '*')  return (cP == '.' || cP == cS) && match(s,p,i-1,j-1);
            else {
                char prev = p[j-1];
                if(prev != '.' && prev != cS) return match(s,p,i,j-2);
                else return match(s,p,i-1,j-2) || match(s,p,i-1,j) || match(s,p,i,j-2);
            }
        }
        else if(i==-1) {
            char cP = p[j];
            if(cP == '*' ) return match(s,p,i,j-2);

        }
        return false;
    }
};