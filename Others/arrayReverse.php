<?php

function arrayReverse($inputArr)
{
    $size = count($inputArr);
    $lastIndex = $size - 1;
    for ($i = 0; $i < $size / 2; $i++) {
        $temp = $inputArr[$i];
        $inputArr[$i] = $inputArr[$lastIndex];
        $inputArr[$lastIndex] = $temp;
        $lastIndex--;
    }
    return $inputArr;
}
$inputArr = [1, 2, 3, 1, 2, 5, 6, 7];
$resultArr = arrayReverse($inputArr);
print_r($resultArr);
