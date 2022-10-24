<?php

function bubbleSort($inputArr, $length)
{
    if ($length == 1) {
        return;
    }
    for ($i = 0; $i < $length - 1; $i++) {
        if ($inputArr[$i] > $inputArr[$i + 1]) {
            $temp = $inputArr[$i];
            $inputArr[$i] = $inputArr[$i + 1];
            $inputArr[$i + 1] = $temp;
        }
    }
    bubbleSort($inputArr, $length - 1);
    return $inputArr;
}

$inputArr = [1, 2, 7, 6, 6, 9, 12];
$length = count($inputArr);
print_r(bubbleSort($inputArr, $length));
