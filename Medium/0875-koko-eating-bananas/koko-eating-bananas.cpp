class Solution {
    long long hours(vector<int>& arr, int n, int mid) {
        long long total = 0;

        for(int i = 0; i < n; i++) {
            total += ((long long)arr[i] + mid - 1) / mid;
        }

        return total;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans;
        int n = piles.size();

        while(low <= high) {
            int mid = (low + high) / 2;

            if(hours(piles, n, mid) <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};