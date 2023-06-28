class Solution {
public:
    int count(int x)
    {
        int count=0;
        while(x)
        {
            if(x&1)
            {
                count++;
            }
            x=x>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(count(i));
        }
        return ans;
        
    }
};
