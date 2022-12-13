 sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, count = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            count++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return count;