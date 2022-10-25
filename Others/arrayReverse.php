<?php

function arrayReverse($inputArr)
{
    $length = count($inputArr);
    for ($i = 0; $i < $length / 2; $i++) {
        $temp = $inputArr[$i];
        $inputArr[$i] = $inputArr[$length - $i - 1];
        $inputArr[$length - $i - 1] = $temp;
    }
    return $inputArr;
}
$inputArr = [1, 2, 7, 6, 4, 9, 12];
print_r(arrayReverse($inputArr));
