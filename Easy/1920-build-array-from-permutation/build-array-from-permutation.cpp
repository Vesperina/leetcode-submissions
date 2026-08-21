class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n);
        int j = 0; 
        for(int i = 0; i < n; i++){ 
            j = nums[i]; 
            ans[i] = nums[j]; 

           

        }
    return ans; 
    }
};