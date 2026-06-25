class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map <char , int> smp ; 
        unordered_map <char , int> tmp ; 

        for(auto i : s){
            smp[i] += 1 ;
        }

        for(auto i : t){
            tmp[i] += 1 ;
        }

        for(auto it = smp.begin() ; it != smp.end() ; it ++){
            if(it->second != tmp[it->first]){
                return false ;
            }
        }

        for(auto it = tmp.begin() ; it != tmp.end() ; it ++){
            if(it->second != smp[it->first]){
                return false ;
            }
        }

        return true ;

    }
};
