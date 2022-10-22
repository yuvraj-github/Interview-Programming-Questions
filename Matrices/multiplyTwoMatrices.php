<?php

$firstMatrix = array(
    array(1, 2),
    array(3, 4)
);

$secondMatrix = array(
    array(1, 1),
    array(1, 1)
);

$resultMatrix = array();

for ($i = 0; $i < count($firstMatrix); $i++) {
    for ($j = 0; $j < count($secondMatrix); $j++) {
        $resultMatrix[$i][$j] = 0;
        for ($k = 0; $k < count($firstMatrix); $k++) {
            $resultMatrix[$i][$j] += $firstMatrix[$i][$k] * $secondMatrix[$k][$j];
        }
    }
}
for ($i = 0; $i < count($firstMatrix); $i++) {
    for ($j = 0; $j < count($secondMatrix); $j++) {
        echo $resultMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
