<!-- 

Output:  
    Array
    (
        [0] => 5
    )
 -->

<?php

function findMatchingElem($inputArr)
{
    $size = count($inputArr);
    $resultArr = [];
    for ($i = 0; $i < $size; $i++) {
        if (in_array($inputArr[$i], $resultArr)) {
            continue;
        }
        for ($j = $i + 1; $j < $size; $j++) {
            if ($inputArr[$i] == $inputArr[$j]) {
                $resultArr[] = $inputArr[$i];
                break;
            }
        }
    }
    return $resultArr;
}
$inputArr = [1, 2, 3, 12, 5, 5, 11, 7, 9];
print_r(findMatchingElem($inputArr));
