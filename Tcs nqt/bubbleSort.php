<?php

function bubbleSort($arrElements = [])
{

    for ($i = 0; $i < count($arrElements); $i++) {
        for ($j = 0; $j < count($arrElements) - $i - 1; $j++) {
            if ($arrElements[$j] > $arrElements[$j + 1]) {
                $temp = $arrElements[$j];
                $arrElements[$j] = $arrElements[$j + 1];
                $arrElements[$j + 1] = $temp;
            }
        }
    }
    return $arrElements;
}
$arrElements = [6, 2, 3, 4, 5];
$resultArr = bubbleSort($arrElements);
print_r($resultArr);
