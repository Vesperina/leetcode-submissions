class Solution {
    string rotated(string a, int b){ 
        reverse(a.begin(),a.begin() + b); 
        reverse(a.begin() + b,a.end()); 
        reverse(a.begin(),a.end()); 
        return a; 


    }
public:
    bool rotateString(string s, string goal) {
        int n = s.size(); 
        for(int i = 0; i < n; i++){ 
            if(rotated(s,i) == goal){ 
                return true; 
            }
        }
        return false;
    }
};