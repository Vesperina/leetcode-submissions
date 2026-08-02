class Solution {
    int sum1(vector<int>& a, int b){
        int add = 0; 
        for(int i = 0; i < b;i++){
            add = add + a[i];
        }
        return add;
    }
    int sum2(vector<int>& x, int b,int c){ 
        int add = 0; 
        for(int i = b;i < c;i++){ 
            add = add + x[i]; 
        }
        return add; 
    }
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(); 
        for(int i = 0; i < n; i++){ 
            if(sum1(nums,i) == sum2(nums,i + 1,n)){
                return i; 
            }
        }
    return -1;   
    }
};