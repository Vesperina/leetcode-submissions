class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; 
        int j = 0;   
        int cnt = 0; 
        int n = nums.size(); 
        for( i = 1; i < n; i++){ 
           if(nums[i] != nums[j]){ 
            j++; 
            nums[j] = nums[i]; 
           
           }
        }
        return j + 1; 
    }
};