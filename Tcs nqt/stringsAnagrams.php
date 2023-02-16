<?php

function checkAnagrams($str1 = '', $str2 = '')
{
    $str1Length = strlen($str1);
    $str2Length = strlen($str2);

    if ($str1Length != $str2Length) {
        return 'no';
    }
    $str1Arr = str_split($str1);
    $str2Arr = str_split($str2);
    sort($str1Arr);
    sort($str2Arr);
    if ($str1Arr == $str2Arr) {
        return 'yes';
    }
    return 'no';
}
$str1 = 'geeksforgeeks';
$str2 = 'forgeeksgeeks';
echo checkAnagrams($str1, $str2);
