<?php

function getMaxOccuringChar($str)
{
    $strLength = strlen($str);
    $str = str_replace(" ", "", $str);
    $arr = str_split($str);
    $output = [];
    foreach ($arr as $key => $val) {
        if (!isset($output[$val])) {
            $output[$val] = 1;
        } else {
            $output[$val]++;
        }
    }
    print_r($output);
    return array_search(min($output), $output);
}
$str = 'geeksforgeeks';
echo getMaxOccuringChar($str);
