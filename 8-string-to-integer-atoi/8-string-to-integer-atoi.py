class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        MAX_INT=2**31-1
        MIN_INT=-2**31
        negative=1
        i=0
        res=0
        # count for whitespace 
        while i<len(s)and s[i]==' ':
            i+=1
        # for symbols
        if i<len(s) and s[i]=='-':
            i+=1
            negative=-1
        elif i<len(s) and s[i]=='+':
            i+=1
            
        # check for number 0-9 48-57
        checker =set('0123456789')
        while i<len(s)and s[i] in checker:
            res=res*10+int(s[i])
            i+=1
        
        # check the max 
        res*=negative
        if res<0:
            return max(res,MIN_INT)
        return min(res,MAX_INT)
