if (small.length() == 0)
    {
        return true;
    }
    if (large.length() == 0)
    {
        return false;
    }
    if (large[0] == small[0])
    {
        return isSubSequence(large.substr(1), small.substr(1));
    }
    else
    {
        return isSubSequence(large.substr(1), small);
    }