<?php

function checkArmstrong($number)
{
    $sum = 0;
    $num = $number;
    while ($number > 0) {
        $remainder = $number % 10;
        $sum += $remainder * $remainder * $remainder;
        $number = $number / 10;
    }

    if ($sum == $num) {
        return 'True';
    }
    return 'False';
}

$number = 153;
echo checkArmstrong($number);
