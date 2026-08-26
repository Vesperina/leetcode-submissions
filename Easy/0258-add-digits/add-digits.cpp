class Solution {
    int sum(int num){ 
        int d = 0; 
        int sum1 = 0; 
        while(num > 0){ 
            d = num % 10; 
            sum1 += d;  
            num = num / 10; 
           
        }
        if(sum1 >= 10){ 
            return sum(sum1); 
        }
    return sum1; 
    }
public:
    int addDigits(int num) {
       return sum(num); 
        
    }
};