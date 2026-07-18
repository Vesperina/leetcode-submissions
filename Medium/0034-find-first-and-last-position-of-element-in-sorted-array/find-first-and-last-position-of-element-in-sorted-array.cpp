class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; 
        int h = n - 1; 
        int first = -1; 
        while(l <= h){ 
            int m = (l + h)/2; 
            if(target == nums[m]){ 
                first = m;
                h = m - 1;  
            }
            else if(target > nums[m]){ 
                l = m + 1; 

            }
            else { 
                h = m - 1; 
            }
           
        }
        
        
        l = 0; 
        h = n - 1; 
        int last = -1; 
        while(l <= h){ 
            int m = (l + h)/2; 
            if(target == nums[m]){ 
                last = m;
                l = m + 1;  
            }
            else if(target > nums[m]){ 
                l = m + 1; 

            }
            else { 
                h = m - 1; 
            }
            
        }
        return {first,last}; 
        
    }
};