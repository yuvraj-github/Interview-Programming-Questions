<!-- 

Time complexity: O(log n)
 -->

<?php

function binarySearch($sortedArr, $x)
{
    $size = count($sortedArr);
    if ($size == 0) {
        return 'False';
    }
    $start = 0;
    $end = $size - 1;
    while ($start <= $end) {
        $mid = floor(($start + $end) / 2);
        if ($x == $sortedArr[$mid]) {
            return 'True';
        }
        if ($x < $sortedArr[$mid]) {
            $end = $mid - 1;
        } else {
            $start = $mid + 1;
        }
    }
    return 'False';
}
$sortedArr = [1, 2, 3, 4, 5];
echo binarySearch($sortedArr, 5);
