class Solution {
public:

bool check(string str, string pattern)
{
    if(str.size() != pattern.size())
        return true;
        
    char arr1[26];
    char arr2[26];
    for(int i=0; i<26; i++)
    {
        arr1[i] = '*';
        arr2[i] = '*';
    }
    for(int i=0; i<str.size(); i++)
    {
        if(arr1[str[i]-'a'] == '*')
            arr1[str[i]-'a'] = pattern[i];
        else if(arr1[str[i]-'a'] != pattern[i])
            return false;
        if(arr2[pattern[i]-'a'] == '*')
            arr2[pattern[i]-'a'] = str[i];
        else if(arr2[pattern[i]-'a'] != str[i])
            return false;
    }
    return true;

}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> res;
    for(int i=0; i<words.size(); i++)
        if(check(words[i], pattern))
            res.push_back(words[i]);
    return res;
}
};