class Solution {
public:
    string toLowerCase(string s) {
        string ans; 
        int n = s.size(); 
        for(int i = 0; i < n; i++){ 
            ans.push_back(tolower(s[i]));
        }
       return ans;  
    }
};