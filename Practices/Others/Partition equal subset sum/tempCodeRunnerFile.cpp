bool splitArrayHelper(int arr[], int n, int index, int target)
{
    if (index >= n)
    {
        return false;
    }
    if (target < 0)
    {
        return false;
    }
    if (target == 0)
    {
        return true;
    }
    bool inc = splitArrayHelper(arr, n, index + 1, target - arr[index]);
    bool exc = splitArrayHelper(arr, n, index + 1, target);
    return inc || exc;
}