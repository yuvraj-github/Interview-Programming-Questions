<!-- 

Input: My Name is Yuvraj

Output: Yuvraj is Name My
 -->

<?php

function strReverse($str)
{
    $strArr = explode(' ', $str);
    $size = count($strArr);
    $lastElemIndex = $size - 1;

    for ($i = 0; $i < $size / 2; $i++) {
        $temp = $strArr[$i];
        $strArr[$i] = $strArr[$lastElemIndex];
        $strArr[$lastElemIndex] = $temp;
        $lastElemIndex--;
    }
    return implode(' ', $strArr);
}

$str = 'My name is Yuvraj Subh';
echo strReverse($str);
