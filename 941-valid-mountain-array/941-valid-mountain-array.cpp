class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
     if(arr.size()<3)
         return 0;
    int climb =1,n=arr.size();
    while(climb< n && arr[climb-1]<arr[climb])
        climb=climb+1;
    if(climb==1||climb==n)
        return 0;
    while(climb<n && arr[climb]<arr[climb-1])
        climb=climb+1;
    if(climb==n)
        return 1;
    return 0;
    }
};