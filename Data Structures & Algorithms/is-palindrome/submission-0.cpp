class Solution {
public:
    bool isPalindrome(string s1) {

        string s = "" ; 

        for(char c : s1){
            if( (c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            s += c ;  }
        }

        for(int i = 0 ; i < s.size()/2 ; i++){

            char a = char(tolower(s[i])) ; 
            char b = char(tolower(s[s.size() - 1 - i])) ;

            cout << a << " " << b << endl ;

            if(a != b) return false ;
        }

        return true ;
        
    }
};
