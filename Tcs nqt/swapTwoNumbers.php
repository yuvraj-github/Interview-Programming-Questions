<?php

function swapNumbers($n1, $n2)
{

    $n1 = $n1 + $n2;
    $n2 = $n1 - $n2;
    $n1 = $n1 - $n2;
    echo 'n1: ' . $n1 . ' ' . 'n2: ' . $n2;
}
$n1 = 10;
$n2 = 20;
echo 'n1: ' . $n1 . ' ' . 'n2: ' . $n2 . "\n";
swapNumbers($n1, $n2);
