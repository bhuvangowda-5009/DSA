class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        for(int i=0;i<s.size();i++){
         for(int j=n-1;j>=0;j--){
            if((s[i]=='(' && s[j]==')')||(s[i]=='{' && s[j]=='}')||(s[i]=='[' && s[j]==']') ){
                return true;
            }
         }
     
        }
        return false;
        
    }
};