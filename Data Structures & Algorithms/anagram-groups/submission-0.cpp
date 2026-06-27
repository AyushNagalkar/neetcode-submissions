class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> mp ;
        vector<vector<string>> result ;

        for(auto i : strs){

            string temp = i ;

            sort(temp.begin() , temp.end());
            cout << temp ; 
            mp[temp].push_back(i) ;

        }

        for(auto it : mp){
            result.push_back(it.second);
        }



        return result;
    }
};
