class Solution {
public:
    string convertToTitle(int num) {
        string str="";
        while(num)
        {
            int alpha=(num-1)%26;
            // char chr=64+alpha;
            str+=('A'+alpha);
            num=(num-1)/26;
        }
        // char chr=64+num;
        //     str+=chr;
        reverse(str.begin(),str.end());
        return str;
        
    }
};