<?php

function convertNullToBlank($inputArr)
{
    foreach ($inputArr as $key => $val) {
        if (is_null($val)) {
            $inputArr[$key] = '';
        }
    }
    return $inputArr;
}
$inputArr = [1, NULL, 2];
$resultArr = convertNullToBlank($inputArr);
print_r($resultArr);
