<?php

function thirdHeighestNumb($inputArr)
{
    $size = count($inputArr);
    if ($size < 3) {
        return 'Invalid Input';
    }
    $highest = $inputArr[0];
    $secondHighest = 0;
    $thirdHighest = 0;

    for ($i = 1; $i < $size; $i++) {
        if ($inputArr[$i] > $highest) {
            $thirdHighest = $secondHighest;
            $secondHighest = $highest;
            $highest = $inputArr[$i];
        } else if ($inputArr[$i] > $secondHighest) {

            $thirdHighest = $secondHighest;
            $secondHighest = $inputArr[$i];
        } else if ($inputArr[$i] > $thirdHighest) {
            $thirdHighest = $inputArr[$i];
        }
    }
    return $thirdHighest;
}

$inputArr = [3, 2, 1, 4];
echo thirdHeighestNumb($inputArr);
