class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        int n = hours.size();  
        for(int i = 0; i < n; i++){ 
            if(hours[i] >= target){ 
                cnt++; 
            }
        } 
      return cnt;   
    }
};