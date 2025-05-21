class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        // Boolean checks
        bool bulky;
        bool heavy;
        // Checking for bulky and heavy
        if(((l>=10000 || w>=10000 || h>=10000) || (((long long) l*w*h))>=1000000000) && (m>=100)){
            bulky = true;
            heavy = true;
        } else if(!((l>=10000 || w>=10000 || h>=10000) || (((long long) l*w*h))>=1000000000) && !(m>=100)){
            bulky = false;
            heavy = false;
        } 
        // Ckecking for bulky and not heavy
        else if(((l>=10000 || w>=10000 || h>=10000) || (l*w*h)>=1000000000) && !(m>=100)){
            bulky = true;
            heavy = false;
        }
        // Checking for heavy and not bulky
        else if(!((l>=10000 || w>=10000 || h>=10000) || (l*w*h)>=1000000000) && (m>=100)){
            bulky = false;
            heavy = true;
        } 
        // Checking for bulky only
        else if((l>=10000 || w>=10000 || h>=10000) || (l*w*h)>=1000000000){
            bulky = true;
        } 
        // Checking for heavy only
        else if(m>=100){
            heavy = true;
        }
        // Returning the statement
        return bulky && heavy ? "Both" 
        : bulky && !heavy ? "Bulky" 
        : heavy && !bulky ? "Heavy"
        : !heavy && !bulky ? "Neither" 
        : bulky ? "Bulky"
        : heavy ? "Heavy" 
        : "";
    }
};