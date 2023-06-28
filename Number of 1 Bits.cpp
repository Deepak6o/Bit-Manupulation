class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n)
        {
            int bit=n&1;
            if(bit)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
