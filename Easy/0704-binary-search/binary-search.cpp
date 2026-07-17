class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; 
        int h = n - 1; 
        while(l <= h){ 
            int m = (l + h)/2; 
            if(target == nums[m]){ 
                return m; 
            }
            else if(target > nums[m]){ 
                l = m + 1; 

            }
            else { 
                h = m - 1; 
            }
        }
        return -1;
        
    }
};