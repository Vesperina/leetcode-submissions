class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n = strs.size(); 
       sort(strs.begin(), strs.end()); 
       string a = strs[0]; 
       string b = strs[n - 1]; 
       string ans = ""; 
       int m = min(a.size(),b.size()); 
       for(int i = 0; i < m; i++){ 
        if(a[i] != b[i]) break; 
        ans += a[i]; 
       }
    return ans; 
    }
};