<?php

function countStrVowelsAndConsonants($str)
{
    $srtLength = strlen($str);
    $arrVowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
    $vowels = 0;
    $consonants = 0;

    for ($i = 0; $i < $srtLength; $i++) {
        if (in_array($str[$i], $arrVowels)) {
            $vowels++;
        } else {
            $consonants++;
        }
    }
    return 'Vowels : ' . $vowels . ' ' . 'Consonants : ' . $consonants;
}

$str = 'YUVRAJ';
echo countStrVowelsAndConsonants($str);
