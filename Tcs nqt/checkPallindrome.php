<?php

function checkPallindrome($str)
{
    $length = strlen($str);
    if ($length == 0) {
        return;
    }
    if ($length == 1) {
        return 'yes';
    }

    $lastIndex = $length - 1;

    for ($i = 0; $i < $length; $i++) {
        if ($str[$i] != $str[$lastIndex]) {
            return 'no';
        }
        $lastIndex--;
    }
    return 'yes';
}

$str = 'racecar';
echo checkPallindrome($str);
