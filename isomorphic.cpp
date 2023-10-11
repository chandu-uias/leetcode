class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1[256]={0}, t1[256]={0}, n=s.length();
        
        int i = 0;
        if(s.size()!=t.size())
        return false;
        
        while(i < n) {
            // cout << s[i] << " " << t[i] << " ";
            
            if(s1[s[i]] != t1[t[i]]) return false;
            s1[s[i]] = i+1, t1[t[i]] = i+1;
            
            // cout << s1[s[i]] << " " << t1[t[i]] << " ";
            i++;
        }
         //  "foo"
        //   "bar"
       //    f b 1 1 o a 2 2 o r 2 0
        return true;
    }
};
