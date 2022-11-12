<?php

function findSecondLargestNum($input)
{
    $size = count($input);
    $max = 0;
    $secondMax = 0;
    for ($i = 0; $i < $size; $i++) {
        if ($input[$i] > $max) {
            $temp = $max;
            $max = $input[$i];
            $secondMax = $temp;
        }
        if ($input[$i] > $secondMax && $max != $input[$i]) {
            $secondMax = $input[$i];
        }
    }
    return $secondMax;
}
$input = [2, 4, 3, 5, 1];
echo findSecondLargestNum($input);
