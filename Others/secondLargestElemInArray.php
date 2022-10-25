<?php

function secondHeighestNumb($inputArr)
{
    $size = count($inputArr);
    $highest = $inputArr[0];
    $secondHighest = $inputArr[0];
    for ($i = 1; $i < $size; $i++) {
        if ($inputArr[$i] > $highest) {
            $secondHighest = $highest;
            $highest = $inputArr[$i];
        } else if ($inputArr[$i] > $secondHighest) {
            $secondHighest = $inputArr[$i];
        }
    }
    return $secondHighest;
}

$inputArr = [2, 1, 3, 4, 4, 6, 5];
echo secondHeighestNumb($inputArr);
