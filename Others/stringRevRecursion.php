<?php

function strReverseUsingRecur($str, $length)
{

    if ($length == 0) {
        return;
    }
    $smallOutput = strReverseUsingRecur(substr($str, 1, $length), $length - 1);
    return $smallOutput . substr($str, 0, 1);
}

$str = 'nityaantt';
$length = strlen($str);
echo strReverseUsingRecur($str, $length);
