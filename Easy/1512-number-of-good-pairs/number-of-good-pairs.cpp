class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(); 
        int cnt = 0; 
        for(int i = 0; i < n; i++){ 
            for(int j = 0; j < n; j++){
                if(nums[j] == nums[i] && i < j){ 
                    cnt++; 
                }
            }
        }
      return cnt;   
    }
};