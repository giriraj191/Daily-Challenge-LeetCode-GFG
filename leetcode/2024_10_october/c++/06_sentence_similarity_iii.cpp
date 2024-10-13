// CODE

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1 == sentence2) return true;

        vector<string> words1 = split(sentence1);
        vector<string> words2 = split(sentence2);

        int n1 = words1.size(), n2 = words2.size();
        int i = 0, j = 0;

        while (i < n1 && i < n2 && words1[i] == words2[i]) {
            i++;
        }
        while (j < n1 - i && j < n2 - i && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }
        return i + j == n1 || i + j == n2;
    }

private:
    vector<string> split(const string& str) {
        vector<string> words;
        istringstream iss(str);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        return words;
    }
};