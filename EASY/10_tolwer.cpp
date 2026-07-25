class Solution {
public:
    string toLowerCase(string s) {
         string a="";
        for(char ch : s){
            ch=tolower(ch);
            a+=ch;
        }
        return a;
    }
};