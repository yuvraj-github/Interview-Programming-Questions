<?php

function findDuplicatesElem($inputArr)
{
    if (count($inputArr) <= 0) {
        return;
    }
    $repeated = [];
    $tempArr = array_count_values($inputArr);
    foreach ($tempArr as $key => $val) {
        if ($val > 1) {
            $repeated[] = $key;
        }
    }
    return $repeated;
}

$inputArr = [1, 2, 3, 4, 4, 5, 6, 1, 3, 5];
print_r(findDuplicatesElem($inputArr));
