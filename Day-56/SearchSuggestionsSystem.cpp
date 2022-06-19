class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> res;
        sort(products.begin(), products.end());
        int i, j, mid, low, high;
        for(i = 0; i < searchWord.size(); i++){
            string s = searchWord.substr(0, i+1);
            low = 0;
            high = products.size();
            while(low < high){
                mid = low + (high - low)/2;
                if(products[mid] >= s){
                    high = mid;
                }else{
                    low = mid + 1;
                }
            }
            vector<string> temp;
            for(j = low; j < low + 3 && j < products.size(); j++){
                if(products[j].find(s) == 0){
                    temp.push_back(products[j]);
                }else{
                    break;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};