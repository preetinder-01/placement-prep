class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        // filling impact of character's
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        // making of result
        vector<int> res;
        int prev = -1;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i){
                // partition time
                res.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return res;
    }
};
/*
formula will be max - prev where max intially is 0 & prev intially is -1
    Using the same above example, let's implement it:

Intially we will be at a and in our hashmap we know that a is impacting till 8. So, we will update our max to 8 for now.
Next we encounter b & it's range is 5. So, it is in the range of 8
Next we encounter b & it's range is 7. So, it is in the range of 8
So, there is no more element further in our range, we gonna use our formula :-
max - prev                                  where max is 8 & prev is -1
8 - (-1)
=> 9
Now we are at d and in our hashmap we know that d is impacting till 14. So, we will update our max to 14 for now & update our previous as well to 8
Next we encounter e & it's range is 15. So, it is out the range of 14 we gonna update our max to 15
Next we encounter f & it's range is 11. So, it is in the range of 15
Next we encounter g & it's range is 13. So, it is in the range of 15
So, there is no more element further in our range, we gonna use our formula :-
max - prev                                  where max is 15 & prev is 8
15 - 8
=> 7
Now we are at h and in our hashmap we know that h is impacting till 19. So, we will update our max to 19 for now & update our previous as well to 15
Next we encounter i & it's range is 22. So, it is out the range of 19 we gonna update our max to 22
Next we encounter j & it's range is 23. So, it is out the range of 22 we gonna update our max to 23
Next we encounter k & it's range is 20. So, it is in the range of 23
Next we encounter l & it's range is 21. So, it is in the range of 23
So, there is no more element further in our range, we gonna use our formula :-
max - prev                                  where max is 23 & prev is 15
23 - 15
=> 8
Thus, we add these values to our ArrayList of let's say result & return them i.e. [9, 7, 8]*/
