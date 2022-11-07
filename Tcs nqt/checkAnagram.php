<?php

function checkAnagram($str1, $str2)
{
    if (count_chars($str1, 1) == count_chars($str2, 1)) {
        return 'yes';
    }
    return 'no';
}
$str1 = 'anagram';
$str2 = 'nagaram';
echo checkAnagram($str1, $str2);
