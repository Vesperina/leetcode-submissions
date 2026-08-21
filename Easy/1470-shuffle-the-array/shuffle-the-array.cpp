class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int b = nums.size();
        vector<int> ans;

        int i = 0;

        while(i < b) {
            if(i % 2 == 0) {
                ans.push_back(nums[i / 2]);
            }
            else {
                ans.push_back(nums[i / 2 + n]);
            }

            i++;
        }

        return ans;
    }
};