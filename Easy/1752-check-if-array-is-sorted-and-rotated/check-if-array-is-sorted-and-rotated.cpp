class Solution {
public:

    void reversePart(vector<int>& arr, int start, int end) {
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& arr, int k) {
        int n = arr.size();

        reversePart(arr, 0, k - 1);
        reversePart(arr, k, n - 1);
        reversePart(arr, 0, n - 1);
    }

    bool isSorted(vector<int>& arr) {
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < arr[i - 1]) return false;
        }
        return true;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();

        for(int k = 0; k < n; k++) {
            vector<int> temp = nums;  // important!

            rotate(temp, k);

            if(isSorted(temp)) {
                return true;
            }
        }

        return false;
    }
};