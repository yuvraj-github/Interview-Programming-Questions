<?php

$num1 = 9;
$num2 = 4;

echo 'num1: ' . $num1 . "\n";
echo 'num2: ' . $num2 . "\n";

$num1 ^= $num2 ^= $num1 ^= $num2;

echo 'num1: ' . $num1 . "\n";
echo 'num2: ' . $num2;
