<?php

function reverseNumber($number)
{
    $revNumber = 0;
    while ($number > 1) {
        $remainder = $number % 10;
        $revNumber = $revNumber * 10 + $remainder;
        $number = $number / 10;
    }
    return $revNumber;
}

$number = 153;
echo reverseNumber($number);
