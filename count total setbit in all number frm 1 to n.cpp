class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int setbits(int x)
    {
        int count =0;
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
    int countSetBits(int n)
    {
        // Your logic here
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count+=setbits(i);
        }
        return count;
    }
};
