class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto it: strs){
            encoded += to_string(it.size()) + "#" + it;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()){
            int hashpos = i;
            while (s[hashpos] != '#'){
                hashpos++;
            }

            int length = stoi(s.substr(i, hashpos - i));
            
            string word = s.substr(hashpos + 1, length);
            ans.push_back(word);

            i = hashpos + length + 1;


            
        }
        return ans;
    }
};
