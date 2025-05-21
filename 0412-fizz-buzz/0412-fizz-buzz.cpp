class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        for(int i=1; i<=n; i++){
            i%3==0 && i%5==0 ? ret.push_back("FizzBuzz")
            : i%3==0 ? ret.push_back("Fizz")
            : i%5==0 ? ret.push_back("Buzz")
            : ret.push_back(to_string(i));
        }
        return ret;
    }
};