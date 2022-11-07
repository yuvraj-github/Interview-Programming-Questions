<?php

function findMissingTerm($inputArr)
{
    if (count($inputArr) <= 1) {
        return;
    }
    $tempArr = range($inputArr[0], max($inputArr));
    return array_diff($tempArr, $inputArr);
}
$inputArr = [1, 2, 3, 5, 7, 8];
print_r(findMissingTerm($inputArr));
