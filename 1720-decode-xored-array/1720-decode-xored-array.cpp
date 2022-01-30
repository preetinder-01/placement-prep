class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded={first};
        for(auto i:encoded)
        {
            decoded.push_back(decoded.back()^i);
        }
        
        return decoded;
    }
};