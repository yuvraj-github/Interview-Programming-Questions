<?php

function secondLargestElem($inputArr)
{
    $size = count($inputArr);
    if ($size < 2) {
        return 'Invalid Input';
    }
    $largest = $inputArr[0];
    $secondLargest = $inputArr[0];
    for ($i = 1; $i < $size; $i++) {
        if ($inputArr[$i] > $largest) {
            $secondLargest = $largest;
            $largest = $inputArr[$i];
        } else if ($inputArr[$i] > $secondLargest && $inputArr[$i] != $largest) {
            $secondLargest = $inputArr[$i];
        }
    }
    return $secondLargest;
}

$inputArr = [1, 8, 8, 4, 4, 4, 3, 5, 1];
echo secondLargestElem($inputArr);
