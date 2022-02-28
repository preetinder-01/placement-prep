#User function Template for python3

class Solution:
    def multiplyStrings(self,s1,s2):
        # code here
        # return the product string
        if s1[0]=='-' and s2[0]=='-':
            q=int(s2[1:])
            p=int(s1[1:])
            return p*q
        elif s2[0]=='-':
            q=int(s2[1:])
            p=int(s1)
            return -p*q
        elif s1[0]=='-':
            q=int(s1[1:])
            p=int(s2)
            return -p*q
        else:
            return int(s1)*int(s2)
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(Solution().multiplyStrings( a.strip() , b.strip() ))

# } Driver Code Ends