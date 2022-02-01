# ALGO
capacity=min(height[l],height[r]*(r-l)
​
> > brute force approach
1.two for loops nested
2.calculate for all pairs possible
3.get max from that
>> optimised solution
1. use two pointers left and right
2. get currarea use max(currarea,result)
3. and her condition is  a.if l<r
l++
else
r--
4. this will get max of currarea