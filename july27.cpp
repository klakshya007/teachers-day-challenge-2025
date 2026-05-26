class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> sentence;
        for (char i:s){
            if (isalnum(i)){
                sentence.push_back(tolower(i));
            }
        }
        vector<char>rev_sentence(sentence.rbegin(),sentence.rend());
        return sentence==rev_sentence;
    }
};