<?php

function multiplyMatrices($mat1, $mat2, $rows, $cols)
{
    $resultMatrix = [];
    for ($i = 0; $i < $rows; $i++) {
        for ($j = 0; $j < $rows; $j++) {
            $resultMatrix[$i][$j] = 0;
            for ($k = 0; $k < $rows; $k++) {
                $resultMatrix[$i][$j] += $mat1[$i][$k] * $mat2[$k][$j];
            }
        }
    }
    return $resultMatrix;
}

$mat1 = [
    [1, 2],
    [1, 1]
];

$mat2 = [
    [1, 2],
    [2, 0]
];

$cols = $rows = count($mat1);

$resultMatrix = multiplyMatrices($mat1, $mat2, $rows, $cols);

for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $cols; $j++) {
        echo $resultMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
