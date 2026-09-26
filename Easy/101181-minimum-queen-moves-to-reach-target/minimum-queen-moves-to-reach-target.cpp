class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        // if(source[0] == target[0] || source[1] == target[1]){
        //     if(source[0] == target[0] && source[1] == target[1] && target[0] == source[0] && target[1] == source[0]){
        //         return 0;
        //     }
        //     return 1;
        // }
        // else if(source[0] == target[1] && source[1] == target[0])
        // {
        //     if(source[0] == target[0] && source[1] == target[1]){
        //         return 0;
        //     }
        //     return 1; 
        // }
        // else if(abs(source[0] - target[0]) == abs(source[1] - target[1])){
        //     return 1; 
        // }
        // else{ 
        //     return 2; 
        // }
        int a = abs(source[0] - target[0]); 
        int b = abs(source[0] - target[1]); 
        int c = abs(source[1] - target[0]); 
        int d = abs(source[1] - target[1]); 

        if(a == 0 && d == 0){
              
            return 0; 
        }
        else if(a == 0 || b == 0 || a == d){
            return 1; 
        }
        else {
            return 2; 
        }
    }
};