class Solution {
    int break1(int k){ 
        int cnt = 0; 
        while(k > 0){ 
            int d = k % 10;
            cnt += d; 
            k = k / 10; 
        }
        return cnt; 
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size(); 
        int sum1 = 0; 
        int sum2 = 0; 
        for( int i = 0; i < n; i++){ 
            sum1 += nums[i]; 
        }
        for(int i = 0; i < n; i++){ 
            sum2 += break1(nums[i]); 

        }
        return abs(sum1 - sum2); 

        
    }
};