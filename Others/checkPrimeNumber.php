<?php

function checkPrimeNumber($num)
{
    if ($num == 1) {
        return 'False';
    }
    for ($i = 2; $i <= $num / 2; $i++) {
        if ($num % $i == 0) {
            return 'False';
        }
    }
    return 'True';
}
echo checkPrimeNumber(9);
