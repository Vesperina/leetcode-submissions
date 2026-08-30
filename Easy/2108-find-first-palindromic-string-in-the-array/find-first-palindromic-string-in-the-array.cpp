class Solution {
    bool pal(string a, int b){ 
        int i = 0; 
        int j = b - 1; 
        while(i < j){ 
            if(a[i] != a[j]){ 
                return false; 
            }
            else{
                i++; 
                j--; 
            }
        }
     return true; 
    }
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size(); 
        int k = 0; 
        string ans; 
        for(int i = 0;i < n; i++){ 
            ans = words[i];
            k = words[i].size(); 
            if(pal(ans,k) == true){ 
                return ans; 
            }

        }
     return "";  
    }
};