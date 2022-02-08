1. count number of ones
2. need vars:
* need left for counting zeroes in nums of left
* need right for counting ones in nums of right
* need max for storing division score
* vector for pushing indices
3. start iterating for element calculate left and right using strategy that if elem == 0 left ++ and if elem ==1 right--
4. if currAns > max
clear vector ad push new index
5. if currAns == max
push index