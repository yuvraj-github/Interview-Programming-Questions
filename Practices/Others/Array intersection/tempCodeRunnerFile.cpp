 int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        /* code */
        if (input1[i] == input2[j])
        {
            cout << input1[i] << " ";
            i++;
            j++;
        }
        else if (input1[i] < input2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }