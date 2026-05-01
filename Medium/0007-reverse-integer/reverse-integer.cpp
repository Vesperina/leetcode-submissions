#include <climits>
class Solution {
    int counting(int w){ 
        int c = 0;
        if(w > 0){
            while (w > 0){ 
            w = w / 10; 
            c++;
        }
        }
        else  { 
            while (w < 0){ 
            w = w / 10; 
            c++;
            }

        }
        return c;
    }
    int reversee(int a) { 
        int count = counting(a);
        
        int d; 
        long long b = 0;
        for(int i = 0;i < count; i++){ 
            d = a % 10; 
            long long c = (int)pow(10,count - i - 1);
            b += d * c;
            a = a / 10; 


        }
        if (b > INT_MAX || b < INT_MIN) {
    return 0;
}
    return (int)b;

        
    }
public:
    int reverse(int x) {
       return reversee(x);

        
    }
};