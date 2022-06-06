class Solution {
public:
bool checkInclusion(string s1, string s2) {
if(s1.size()>s2.size()){
        return false;
    }
   
    vector<int> freqs1(26,0);
    for(int i=0;i<s1.size();i++){
        freqs1[s1[i]-'a']++;
    }
   
    vector<int> freqs2(26,0);
      for(int i=0;i<s1.size();i++){
        freqs2[s2[i]-'a']++;
    }
    
     if(freqs2 == freqs1)return true;
    
    for(int l = 1;l<=s2.size()-s1.size();l++){
        int r= l+s1.size()-1; 
        freqs2[s2[l-1]-'a']--;
        freqs2[s2[r]-'a']++;
        if(freqs2 == freqs1)return true;
    }
    return false;
}
};