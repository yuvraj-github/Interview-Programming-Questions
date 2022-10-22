<?php

function strReverse($str)
{
    $length = strlen($str);
    if ($length == 1) {
        return $str;
    }
    $smallOutput =  strReverse(substr($str, 1, $length));
    return $smallOutput . substr($str, 0, 1);
}
$str = "Hello";
echo strReverse($str);
