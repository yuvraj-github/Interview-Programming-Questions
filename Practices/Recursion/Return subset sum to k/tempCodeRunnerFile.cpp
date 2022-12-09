void findSubsetsThatSumToKHelper(vector<int> arr, vector<vector<int>> &ans, vector<int> output, int n, int k, int index, int sum)
{
    if (index == n)
    {
        if (k == sum)
        {
            ans.push_back(output);
        }
        return;
    }
    findSubsetsThatSumToKHelper(arr, ans, output, n, k, index + 1, sum + arr[index]);
    output.push_back(arr[index]);
    findSubsetsThatSumToKHelper(arr, ans, output, n, k, index + 1, sum);
}