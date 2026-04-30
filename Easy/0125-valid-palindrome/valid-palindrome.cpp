class Solution {
public:
    string normalize(string s) {
    string result = "";

    for(char c : s) {
        if(isalnum(c)) {          
            result += tolower(c); 
        }
    }

    return result;
}
    bool isPalindrome(string s) {
    s = normalize(s);

    int left = 0;
    int right = s.size() - 1;

    while(left < right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
    
};
