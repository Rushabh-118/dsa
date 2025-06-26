class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        vector<int> bits;
        for(int i=0;i<32;i++) {
            bits.push_back(n%2);
            n/=2;
        }
        for(int i=0;i<32;i++) ans = ans*2 + bits[i];
        return ans;
    }
};