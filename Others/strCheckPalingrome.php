<!-- 

Input : MOM

Output: True
 -->

<?php

function checkPalindrome($str)
{
    $strLength = strlen($str);
    if ($strLength <= 1) {
        return 'True';
    }
    $count = 0;
    for ($i = $strLength - 1; $i >= 0; $i--) {
        if ($str[$count] != $str[$i]) {
            return 'False';
        }
        $count++;
    }
    return 'True';
}

$str = "racecar";
echo checkPalindrome($str);
