<?php

function findFactorial($n)
{
    if ($n <= 1) {
        return 1;
    }
    return $n * findFactorial($n - 1);
}

$n = 5;
echo findFactorial($n);
