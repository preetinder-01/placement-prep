class Solution {
public:
    
    void merge(vector<int> &count,vector<pair<int,int>> &v, int start,int mid, int end)
    {
        vector<pair<int,int>> temp(end-start+1);
        int i=start;
        int j=mid+1;
        int k=0;
        
        while(i<=mid and j<=end)
        {
            if(v[i].first<=v[j].first)
            {
                temp[k++]=v[j++];
            }
            else
            {
                count[v[i].second]+=end-j+1;
                temp[k++]=v[i++];
            }
        }
        while(i<=mid)
        {
            temp[k++]=v[i++];
        }
        while(j<=end)
        {
           temp[k++]=v[j++] ;
        }
        for(int i=start;i<=end;i++)
        {
            v[i]=temp[i-start];
        }
        
    }
    
    void mergeSort(vector<int> &count,vector<pair<int,int>>& v, int start, int end)
    {
        if(start<end)
        {
            int mid=start+(end-start)/2;
            mergeSort(count,v,start,mid);
            mergeSort(count,v,mid+1,end);
            merge(count,v,start,mid,end);
        }
        
    }
    
    vector<int> countSmaller(vector<int>& nums) {
    int n=nums.size();
    vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            pair<int,int> p;
            p.first=nums[i];
            p.second=i;
            v[i]=p;
        }
        vector<int> count(n,0);
        mergeSort(count,v,0,n-1);
        return count;
    
    }
};