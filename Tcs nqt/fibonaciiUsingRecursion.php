<?php

function printFibonacii($n)
{

    if ($n <= 1) {
        return $n;
    }
    return printFibonacii($n-1) + printFibonacii($n - 2);
}

for ($i = 0; $i < 7; $i++) {
    echo printFibonacii($i) . ' ';
}
