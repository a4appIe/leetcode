class Solution {
public:
    string trim(string s){
        int i=0, j=s.size()-1;
        while(s[i]==(char)32){
            s.erase(i, 1);
        }
        while(s[j]==(char)32){
            s.erase(j, -1);
        }
        return s;
    }

    string removeSpaces(string s){
        regex pattern("\\s{2,}");
        return regex_replace(s, pattern, " ");
    }

    vector<string> split(string s){
        vector<string> res;
        string word;
        for (char ch : s) {
            if (ch == (char)32) {
                if (!word.empty())
                    res.push_back(word);
                word.clear();
            } else {
                word += ch;
            }
        }
        if (!word.empty()) {
            res.push_back(word);
        }
        return res;
    }

    string join(vector<string> v){
        string ret;
        for(int i=0; i<v.size(); i++){
            ret+=v[i];
            if(i!=v.size()-1){
                ret+=" ";
            }
        }
        return ret;
    }

    string reverseWords(string s) {
        vector<string> arr;
        s = trim(s);
        s = removeSpaces(s);
        arr = split(s);
        reverse(arr.begin(), arr.end());
        s = join(arr);
        return s;
    }
};