class Solution {
public:
    int countKeyChanges(string s) {
        int j = 0; 
        int n = s.size(); 
        int ans = 0; 
        for(int i = 0; i < n - 1; i++){ 
            j = i + 1; 
            if(tolower(s[i]) != tolower(s[j])){ 
                ans++; 
            }
        }
      return ans; 
    }
};