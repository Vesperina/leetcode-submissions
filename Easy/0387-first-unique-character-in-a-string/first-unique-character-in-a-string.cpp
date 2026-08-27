class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size(); 
        for(int i = 0; i < n; i++){ 
            bool dup = false; 
            for(int j = 0; j < n; j++){ 
                if(i != j && s[i] == s[j]){
                    dup = true;  
                    break; 
                }
               
            }
            if(!dup){ 
             return i;  
            }
        }
    return -1; 
        
    }
};