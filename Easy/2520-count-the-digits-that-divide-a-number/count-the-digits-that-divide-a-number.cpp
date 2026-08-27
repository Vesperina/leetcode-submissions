class Solution {
public:
    int countDigits(int num) {
        int d = 0;
        int cnt = 0;  
        int temp = num; 
        while(temp > 0){ 
            d = temp % 10; 
            if(num % d == 0){ 
                cnt++; 
            }
        temp = temp / 10; 

        }
    return cnt; 
    }
};