class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1; 
        
        for(char c:s){ 
            freq1[c]++; 
        }
        for(char c:t){ 
            freq1[c]--; 
        }
        for(auto[ch,cnt]:freq1){ 
            if(cnt != 0){
                return false;  
            }
        }
        return true; 
    }
};