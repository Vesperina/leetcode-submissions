class Solution{
    string pal(string a, int d,int n){ 
        int i = d - 1; 
        int j = d + 1;  
        string b = ""; 
        while(i >= 0 && j < n && a[i] == a[j]){ 
                i--; 
                j++; 
        }
        for(int k = i + 1; k < j; k++){ 
            b += a[k];
        }
    return b; 

        
    }
    string palEven(string a, int d, int n) {
    int i = d;
    int j = d + 1;

    while(i >= 0 && j < n && a[i] == a[j]) {
        i--;
        j++;
    }

    string b = "";

    for(int k = i + 1; k < j; k++) {
        b += a[k];
    }

    return b;
}
public:
    string longestPalindrome(string s) {
        string ans = "";         
       
        int n = s.size(); 
        for(int i = 0; i < n ; i++){
             string o = pal(s,i,n); 
            string e = palEven(s,i,n);
            if(o.size() > ans.size()){
                ans = o;
            }

            if(e.size() > ans.size()){ 
                ans = e; 
            }
        }
    return ans; 
        
    }
};