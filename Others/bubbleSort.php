<?php

function bubbleSort($inputArr)
{
    $arrSize = count($inputArr);
    for ($i = 0; $i < $arrSize; $i++) {
        for ($j = 0; $j < $arrSize - $i - 1; $j++) {
            if ($inputArr[$j] > $inputArr[$j + 1]) {
                $temp = $inputArr[$j];
                $inputArr[$j] = $inputArr[$j + 1];
                $inputArr[$j + 1] = $temp;
            }
        }
    }
    return $inputArr;
}

$inputArr = [1, 2, 7, 6, 6, 9, 12];
print_r(bubbleSort($inputArr));
