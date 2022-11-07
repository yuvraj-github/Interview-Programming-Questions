<?php

function removeAllOccurenceOfChar($str, $char)
{
    $strLength = strlen($str);
    $resultStr = '';
    for ($i = 0; $i < $strLength; $i++) {
        if ($str[$i] != $char) {
            $resultStr .= $str[$i];
        }
    }
    return $resultStr;
}
$str = 'geeksforgeeks';
$char = 'e';
echo removeAllOccurenceOfChar($str, $char);
