class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; 
        int h = n - 1; 
        int ans; 
        if(target < nums[l]){ 
                return l; 
            }
            if(target > nums[h]){ 
                return h + 1; 
            } 
        while(l <= h){ 
            int m = (l + h)/2;
           
            if(target <= nums[m]){ 
                ans = m; 
                h = m - 1;  
            }
            else { 
                l = m + 1; 

            }
           
        }
        return ans; 
        
    }
};