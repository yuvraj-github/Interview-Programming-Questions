<?php

function fibonacii($num)
{
    if ($num == 0) {
        return 0;
    }
    if ($num == 1) {
        return 1;
    }
    return fibonacii($num - 1) + fibonacii($num - 2);
}
for ($i = 0; $i < 10; $i++) {
    echo fibonacii($i) . ' ';
}
