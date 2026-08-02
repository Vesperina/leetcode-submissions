class Solution {
public:
    int mySqrt(int x) {
        long long low = 1; 
        long long high = x; 
        while(low <= high){ 
            long long mid = (low + high)/2; 
            if(mid * mid <= x){ 
                low = mid + 1; 
            }
            else high = mid - 1; 
        }
    return high;   
    }
};