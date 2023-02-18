<?php

function reverseArr($arrElements = [])
{

    $lastIndex = count($arrElements) - 1;

    for ($i = 0; $i < count($arrElements) / 2; $i++) {
        $temp = $arrElements[$i];
        $arrElements[$i] = $arrElements[$lastIndex];
        $arrElements[$lastIndex] = $temp;
        $lastIndex--;
    }
    return $arrElements;
}
$arrElements = [5, 2, 1, 4, 5];
$resultArr = reverseArr($arrElements);
print_r($resultArr);
