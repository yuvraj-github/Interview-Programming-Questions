<?php

function binarySearch($inputArr, $start, $end, $x)
{
    if ($start > $end) {
        return 'false';
    }
    $mid = floor(($start + $end) / 2);
    if ($inputArr[$mid] == $x) {
        return 'true';
    } else if ($x < $inputArr[$mid]) {
        return binarySearch($inputArr, $start, $mid - 1, $x);
    } else {
        return binarySearch($inputArr, $mid + 1, $end, $x);
    }
}
$inputArr = [20, 40, 60, 70, 90];
$size = count($inputArr);
$start = 0;
$end = $size - 1;
echo binarySearch($inputArr, $start, $end, 40);
