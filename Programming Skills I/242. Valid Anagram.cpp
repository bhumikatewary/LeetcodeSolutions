class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0, j=0; i<s.size(); i++,j++){
            if(s==t){
                return true;
            }else{
            return false;
        }
        }
        return false;
    }
};
