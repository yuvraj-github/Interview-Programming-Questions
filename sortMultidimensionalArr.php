<?php

function sortMultidimensionalArr($input)
{
    $size = count($input);
    for ($i = 1; $i <= $size; $i++) {
        for ($j = 1; $j <= $size - $i; $j++) {
            if ($input[$j]['marks'] > $input[$j + 1]['marks']) {
                $temp = $input[$j + 1];
                $input[$j + 1] = $input[$j];
                $input[$j] = $temp;
            }
        }
    }
    print_r($input);
}
$input = [
    1 => [
        'name' => 'Yuvraj',
        'marks' => 60
    ],
    2 => [
        'name' => 'Sachin',
        'marks' => 56,
    ],
    3 => [
        'name' => 'Nilam',
        'marks' => 78
    ]
];
sortMultidimensionalArr($input);
