<?php

function strReverse($str)
{
    $length = strlen($str);
    $lastCharIndex = $length - 1;

    for ($i = 0; $i < $length / 2; $i++) {
        $temp = $str[$i];
        $str[$i] = $str[$lastCharIndex];
        $str[$lastCharIndex] = $temp;
        $lastCharIndex--;
    }
    return $str;
}

$str = 'Yuvraj';
echo strReverse($str);
