class Solution {
  public:
    bool isSubseq(const string &s, const string &word) {
        int i = 0;
        int j = 0;
        while(i<word.size() && j<s.size()) {
            if(word[i] == s[j]) {
                i++;
            }
            j++;
        }
        return i == word.size();
    }
    string findLongestWord(string &s, vector<string> &d) {
        // Abhi Code Karo
        sort(d.begin(), d.end(), [](const string &a, const string &b) {
            if(a.size() != b.size())  return a.size() > b.size();
            return a < b;
        });
        for(const string &word : d) {
            if(isSubseq(s, word)) {
                return word;
            }
        }
        return "";
    }
};