class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a = accounts.size();  
        int b = accounts[0].size(); 
        int i = 0; 
        int j = 0; 
        int cnt = 0; 
        int maxi = 0;
        for(int i = 0; i < a; i++){ 
            int cnt = 0; 
            for(int j = 0; j < b; j++){ 
                cnt = cnt + accounts[i][j]; 
               
            }
         maxi = max(maxi,cnt); 
        }
    return maxi; 
        
    }
};