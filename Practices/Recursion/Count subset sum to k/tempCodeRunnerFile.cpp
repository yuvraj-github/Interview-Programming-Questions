int perfectSumHelper(int arr[], int n, int x, int tempsum, int index, int &count)
{
    if (index == n)
    {
        if (tempsum == x)
        {
            count++;
        }
        return count;
    }
    perfectSumHelper(arr, n, x, tempsum + arr[index], index + 1, count);
    perfectSumHelper(arr, n, x, tempsum, index + 1, count);
}