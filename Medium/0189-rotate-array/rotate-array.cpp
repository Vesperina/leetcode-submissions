class Solution {
    void reversearr(vector<int>& a, int x, int y) {
        while (x < y) {
            swap(a[x], a[y]);
            x++;
            y--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reversearr(nums, 0, n - 1);

        
        reversearr(nums, 0, k - 1);

        
        reversearr(nums, k, n - 1);
    }
};