class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        int n = arr.size(), pre[n];
        vector<int> res;
        pre[0] = arr[0];

        for (size_t i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] ^ arr[i];
        }
        for (size_t i = 0; i < q.size(); i++)
        {
            int l = q[i][0],r=q[i][1];

            if (l==0)
            {
                res.push_back(pre[r]);
            }
            else{
                res.push_back(pre[r] ^ pre[l - 1]);
            }
        }
        
    }
    return res;
};