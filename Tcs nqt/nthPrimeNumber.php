<?php

function isPrime($n)
{
    if ($n <= 1) {
        return false;
    }
    if ($n == 2) {
        return true;
    }
    for ($i = 2; $i <= $n / 2; $i++) {
        if ($n % $i == 0) {
            return false;
        }
    }
    return true;
}
function nthPrimeNumber($n)
{
    $count = 0;
    $i = 2;
    while ($count != $n) {
        if (isPrime($i)) {
            $count++;
        }
        $i++;
    }
    $i--;
    return $i;
}
echo nthPrimeNumber(10);
