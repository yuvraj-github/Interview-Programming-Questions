<!-- 

0 1 1 2 3 5 8 13 21 34 
 -->

<?php

$num1 = 0;
$num2 = 1;

for ($i = 1; $i <= 10; $i++) {
    echo $num1 . ' ';
    $num3 = $num1 + $num2;
    $num1 = $num2;
    $num2 = $num3;
}
