<?php

function dispalyMatrix($rows, $cols)
{
    $resultMatrix = [];
    for ($i = 0; $i < $rows; $i++) {
        for ($j = 0; $j < $cols; $j++) {
            if ($i + $j == $rows - 1) {
                $resultMatrix[$i][$j] = 1;
            } else {
                $resultMatrix[$i][$j] = 0;
            }
        }
    }
    return $resultMatrix;
}
$rows = 3;
$cols = 3;
$resultMatrix = dispalyMatrix($rows, $cols);
for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $cols; $j++) {
        echo $resultMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
