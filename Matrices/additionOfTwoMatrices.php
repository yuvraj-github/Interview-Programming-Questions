<?php

$firstMatrix = array(
    array(1, 3, 4),
    array(2, 5, 6),
    array(3, 5, 7)
);
$secondMatrix = array(
    array(4, 6, 8),
    array(7, 8, 9),
    array(0, 0, 0)
);

$resultMatrix = array();

if (count($firstMatrix) == count($secondMatrix) && count($firstMatrix[0]) == count($secondMatrix[0])) {
    for ($i = 0; $i < count($firstMatrix); $i++) {
        for ($j = 0; $j < count($firstMatrix); $j++) {
            $resultMatrix[$i][$j] = $firstMatrix[$i][$j] + $secondMatrix[$i][$j];
        }
    }
    for ($i = 0; $i < count($firstMatrix); $i++) {
        for ($j = 0; $j < count($firstMatrix); $j++) {
            echo $resultMatrix[$i][$j] . ' ';
        }
        echo "\n";
    }
} else {
    echo 'invalid';
}
