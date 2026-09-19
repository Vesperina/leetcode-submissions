class Solution {
    bool checkcircle(int g, int f, int r, int x, int y){ 
        if(pow((x - g),2) + pow((y - f),2) <= pow(r,2)){ 
            return true; 
        }
    
        return false; 

    }
    bool checkrect(int x1, int y1, int x2, int y2, int x, int y){ 
        if(x >= x1 && x <= x2 && y >= y1 && y <= y2){ 
            return true; 
        }
        return false; 
    }
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        for(int i = x1; i <= x2; i++){ 
            for(int j = y1; j <= y2; j++){
                if(checkcircle(xCenter,yCenter,radius,i,j) == true &&checkrect(x1,y1,x2,y2,i,j) == true){ 
                    return true;
                }

            }
        }
        return false;
    }
};