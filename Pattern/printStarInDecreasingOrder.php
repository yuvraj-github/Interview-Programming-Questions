<?php

function printPattern($limit)
{
    for ($i = 0; $i < $limit; $i++) {
        for ($j = $i; $j < $limit; $j++) {
            echo '* ';
        }
        echo "\n";
    }
}
printPattern(5);
