class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result ;
        unordered_map<int ,int> mp ; 

        vector<vector<int>> freq(nums.size() + 1 , vector<int>(0) ); 

        int count = 0 ; 
        int num = nums[0]; ; 

        sort(nums.begin(),nums.end());


        for(int i = 0 ; i < nums.size() ; i++){

            if(num != nums[i]){

                freq[count].push_back(num);
                cout<<"I : "<< i << endl ;
                cout <<"count : "<<count << "nums : "<< num << endl ;
                count = 0 ;
                num = nums[i]; 
                count ++ ;
            }else{
                count++;
            }

            if(i == nums.size() - 1){
                freq[count].push_back(num); 
                cout<<"I : "<< i << endl ;
                cout <<"count : "<<count << "nums : "<< num << endl ;    
            }

        }

        for(int i = freq.size()-1 ; i >= 0; i--){
            for(auto j : freq[i]){
                result.push_back(j);
                k--;
                if(k == 0){
                    return result ;
                }
            }
        }
        
        return result ;
    }
};
