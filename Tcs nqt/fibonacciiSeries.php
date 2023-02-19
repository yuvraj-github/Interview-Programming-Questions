<?php

function printFibonacii($n)
{

    $n1 = 0;
    $n2 = 1;
    $sum = 0;

    echo $n1 . ' ';
    echo $n2 . ' ';
    for ($i = 2; $i < $n; $i++) {
        $sum = $n1 + $n2;
        echo $sum . ' ';
        $n1 = $n2;
        $n2 = $sum;
    }
}

printFibonacii(7);
