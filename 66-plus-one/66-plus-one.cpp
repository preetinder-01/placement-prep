class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9)
        {
            digits[n-1]++;
            return digits;
        }
        else 
        {
            digits[n-1]=0;
            for(int i=n-2;i>=0;i--)
            {
                if(digits[i]<9)
                {
                    digits[i]++;
                    break;
                }
                else
                {
                    digits[i]=0;
                }
            }
            if(digits[0]==0)
            {
                digits.push_back(1);
                reverse(digits.begin(),digits.end());
                
            }
            return digits;
        }
    }
};