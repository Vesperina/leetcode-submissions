class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0; 
        int r = n - 1;
        int a = 0; 
        int area = 0;  
        while(l < r){
            a  = min(height[l],height[r]); 
            area = max(area,a * (r - l)); 
            if(height[l] < height[r]){
                l++; 
            }
            else if(height[l] > height[r]){ 
                r--; 
            }
            else{ 
               l++; 
               r--;
            }

        }
    return area;  
    }
};