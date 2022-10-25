<?php

function addMatrices($mat1, $mat2, $rows, $cols)
{
    $resultMatrix = [];
    for ($i = 0; $i < $rows; $i++) {
        for ($j = 0; $j < $cols; $j++) {
            $resultMatrix[$i][$j] = $mat1[$i][$j] + $mat2[$i][$j];
        }
    }
    return $resultMatrix;
}

$mat1 = [
    [1, 2, 3],
    [1, 1, 1],
    [0, 0, 0]
];

$mat2 = [
    [1, 1, 3],
    [1, 1, 1],
    [0, 1, 0]
];

$rows = $cols = count($mat1);

$resultMatrix = addMatrices($mat1, $mat2, $rows, $cols);
for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $cols; $j++) {
        echo $resultMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
