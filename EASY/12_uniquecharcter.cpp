class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};

        for(char ch : s){
            if(ch>='a'&&ch<='z'){
                freq[ch-'a']++;
            }
        }
       
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1){
            return i;
               
            }
        }
      return -1;
    }
};