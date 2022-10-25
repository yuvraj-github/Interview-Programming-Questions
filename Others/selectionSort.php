<?php
function selectionSort($inputArr, $n)
{
    for ($i = 0; $i < $n; $i++) {
        $minElemIndex = $i;
        for ($j = $i + 1; $j < $n; $j++) {
            if ($inputArr[$j] < $inputArr[$minElemIndex]) {
                $minElemIndex = $j;
            }
        }
        if ($inputArr[$i] > $inputArr[$minElemIndex]) {
            $temp = $inputArr[$i];
            $inputArr[$i] = $inputArr[$minElemIndex];
            $inputArr[$minElemIndex] = $temp;
        }
    }
    return $inputArr;
}

$inputArr = [64, 25, 12, 22, 11, 20, 0, 1];
$len = count($inputArr);
$resultArr = selectionSort($inputArr, $len);
print_r($resultArr);
