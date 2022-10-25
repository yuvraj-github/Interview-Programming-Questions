<!-- 

 Time complexity: O(n²)
 Space complextiy: O(1)
 -->
<?php

function insertionSort($inputArr)
{
    $length = count($inputArr);
    for ($i = 1; $i < $length; $i++) {
        $j = $i;

        while ($j > 0 && $inputArr[$j - 1] > $inputArr[$j]) {
            $temp = $inputArr[$j - 1];
            $inputArr[$j - 1] = $inputArr[$j];
            $inputArr[$j] = $temp;
            $j--;
        }
    }
    return $inputArr;
}

$inputArr = [12, 11, 13, 5, 6];
print_r(insertionSort($inputArr));
