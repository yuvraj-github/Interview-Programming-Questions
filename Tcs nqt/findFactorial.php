<?php

function findFactorial($n)
{
    $fact = 1;

    for ($i = 1; $i <= $n; $i++) {
        $fact = $fact * $i;
    }
    return $fact;
}

$n = 4;
echo findFactorial($n);
