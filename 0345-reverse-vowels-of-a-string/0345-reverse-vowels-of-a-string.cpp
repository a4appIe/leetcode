class Solution {
public:
    string reverseVowels(string s) {
        int i=0; 
        int j=s.size()-1;
        regex vowel("[aeiouAEIOU]");
        while(i<j){
            if(regex_match(string(1, s[i]), vowel)){
                while(!regex_match(string(1, s[j]), vowel)){
                    j--;
                }
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
            }
            i++;
        }
        return s;
    }
};