class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> mp1;
        unordered_map<char, vector<int>> mp2; 
        int n = s.size(); 
        int m = t.size(); 
        for(int i = 0; i < n; i++){ 
            mp1[s[i]].push_back(i); 
        }
          for(int i = 0; i < m; i++){ 
            mp2[t[i]].push_back(i); 
        }
        for(int i = 0; i < n; i++){
            if(mp1[s[i]] != mp2[t[i]]){ 
                return false; 
            }
        }
        return true;
        
    }
};