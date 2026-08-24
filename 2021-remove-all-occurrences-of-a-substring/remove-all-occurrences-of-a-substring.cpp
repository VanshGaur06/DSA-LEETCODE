class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while( s.length() > 0 && s.find(part) < s.length()){
        int start = s.find(part);
        s.erase(start , part.length());
        }

        return s;
    }
};