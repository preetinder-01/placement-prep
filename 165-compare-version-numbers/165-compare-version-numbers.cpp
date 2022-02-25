class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1=version1.size(),n2=version2.size();
        int i=0,j=0,number1=0,number2=0;
        // two pointer approach 
        while(i<n1 ||j<n2)
        {
            while(i<n1 && version1[i]!='.')
            {
                number1=number1*10+(version1[i]-'0');
                i++;
            }
            while(j<n2 && version2[j]!='.')
                
            {
                number2=number2*10+(version2[j]-'0');
                j++;
            }
            if(number1>number2)
                return 1;
            if(number1<number2)
                return -1;
            number1=0,number2=0;
            i++,j++;
        }
        return 0;
    }
};