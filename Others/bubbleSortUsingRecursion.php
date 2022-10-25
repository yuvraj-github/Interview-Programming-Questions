<?php

function bubbleSortUsingRecursion(&$inputArr, $size)
{
    if ($size == 1) {
        return;
    }
    for ($i = 0; $i < $size - 1; $i++) {
        if ($inputArr[$i] > $inputArr[$i + 1]) {
            $temp = $inputArr[$i];
            $inputArr[$i] = $inputArr[$i + 1];
            $inputArr[$i + 1] = $temp;
        }
    }
    bubbleSortUsingRecursion($inputArr, $size - 1);
}
$inputArr = [1, 5, 6, 8, 2, 3, 4, 9, 0, 5, 6, 6];
$size = count($inputArr);
bubbleSortUsingRecursion($inputArr, $size);
print_r($inputArr);
