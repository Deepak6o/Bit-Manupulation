class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        // for(long long i=0;i<31;i++)
        // {
        //     long long ans=pow(2,i);
        //     if(ans==n)
        //     {
        //         return true;
        //     }
        // }
        // return false;
      
         if(n > 0)
            return !(n & (n-1));
        return false;
    }
};
