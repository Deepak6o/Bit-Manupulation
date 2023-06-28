class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int bit = a ^b;
        int count =0;
        while(bit)
        {
            if(bit&1)
            {
                count++;
            }
            bit=bit>>1;
        }
        return count;
        
    }
};
