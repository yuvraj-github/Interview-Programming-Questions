<?php

$num1 = 9;
$num2 = 4;

echo 'num1: ' . $num1 . "\n";
echo 'num2: ' . $num2 . "\n";

list($num1, $num2) = array($num2, $num1);

echo 'num1: ' . $num1 . "\n";
echo 'num2: ' . $num2;
