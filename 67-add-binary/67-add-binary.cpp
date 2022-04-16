class Solution {
public:
    string addBinary(string a, string b) {
        string str="";
        int size1=a.length(),size2=b.length();
        int carry=0;
        int diff=abs(size1-size2);
        if(size1>size2)
        {
            reverse(b.begin(),b.end());
            for(int i=0;i<diff;i++)
            {
                b+='0';
            }
            reverse(b.begin(),b.end());
        }
        if(size2>size1)
        {
            reverse(a.begin(),a.end());
            for(int i=0;i<diff;i++)
            {
                a+='0';
            }
            reverse(a.begin(),a.end());
        }
        // int carry=0;
        size1=a.length();
        for(int i=size1-1;i>=0;i--)
        {
            if(carry==0)
            {
                if(a[i]=='0')
                    str+=b[i];
                else if(b[i]=='0')
                    str+=a[i];
                else if(a[i]=='1' && b[i]=='1')
                {
                    str+='0';
                    carry=1;
                }
            }
            else if(carry==1)
            {
                if(a[i]=='0' && b[i]=='0')
                    
                {
                    carry=0;
                    str+='1';
                }
                else if(b[i]=='1' && a[i]=='1')
                {
                    str+='1';
                    carry=1;
                }
                else if((a[i]=='0' and b[i]=='1') or (a[i]=='1' and b[i]=='0'))
                {
                    str+='0';
                    carry=1;
                }
            }
        }
        if(carry==1)
            str+='1';
        reverse(str.begin(),str.end());
        return str;
    }
};