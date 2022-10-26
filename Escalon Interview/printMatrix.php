<!-- 

    1 4 9 14 
    2 5 10 15 
    3 6 11 16 
    4 7 12  
-->

<?php

function displayMatrix($rows)
{
    $resultMatrix = [];
    for ($i = 0; $i < $rows; $i++) {
        $sum = $i;
        $oddNum = 1;
        for ($j = 0; $j < $rows; $j++) {
            $sum += $oddNum;
            if ($i == $j && $i == $rows - 1) {
                $resultMatrix[$i][$j] = NULL;
            } else {

                $resultMatrix[$i][$j] = $sum;
            }
            if ($j < $rows - 2) {
                $oddNum += 2;
            }
        }
    }
    return $resultMatrix;
}
$rows = 4;
$resultMatrix = displayMatrix($rows);
for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $rows; $j++) {
        echo $resultMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
