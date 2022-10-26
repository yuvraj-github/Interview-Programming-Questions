<?php

function removeDuplicateElem($inputArr)
{
    $size = count($inputArr);
    $resultArr = [];
    for ($i = 0; $i < $size; $i++) {
        if (!in_array($inputArr[$i], $resultArr)) {
            $resultArr[] = $inputArr[$i];
        }
    }
    return $resultArr;
}

$inputArr = [1, 2, 1, 3, 3, 5, 1, 1, 6];
$resultArr = removeDuplicateElem($inputArr);
print_r($resultArr);
