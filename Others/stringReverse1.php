<!-- 

Input: My Name is Yuvraj

Output: Yuvraj is Name My
 -->

<?php

function strReverse($str)
{
    $strExplode = explode(' ', $str);
    $strReverse = '';
    for ($i = count($strExplode) - 1; $i >= 0; $i--) {
        $strReverse .= $strExplode[$i] . ' ';
    }
    return $strReverse;
}

$str = 'My Name is Yuvraj';
echo strReverse($str);
