class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
       int i = 0, j = 0;
       while(i < word.size() and j < abbr.size()){
        if(word[i] == abbr[j]){
            i++, j++;
        }else if((word[i] != abbr[j] and isalpha(abbr[j]) ) or abbr[j] == '0'){
            return false;
        }else{
            string num = "";
            while (isdigit(abbr[j]) and j < abbr.size()){
                num += abbr[j];
                j++;
            }
            int value = stoi(num);
            i += value;
        }
       }

       return i == word.size() and j == abbr.size();        
    }
};