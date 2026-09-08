class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freq1, freq2;
        for(auto i : ransomNote) freq1[i-'a']++;
        for(auto i : magazine) freq2[i-'a']++;
        for(auto &[ch,count] : freq1){
            if(freq2.find(ch) == freq2.end()) return false;
            if(count > freq2[ch]) return false;
        }
        return true;
    }
};