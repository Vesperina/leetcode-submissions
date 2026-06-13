class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int count = 1;
        int maxCount = 1;

        for (int i = 1; i < nums.size(); i++) {

           
            if (nums[i] == nums[i - 1])
                continue;

            
            if (nums[i] == nums[i - 1] + 1)
                count++;

            
            else {
                maxCount = max(maxCount, count);
                count = 1;
            }
        }

        
        maxCount = max(maxCount, count);

        return maxCount;
    }
};