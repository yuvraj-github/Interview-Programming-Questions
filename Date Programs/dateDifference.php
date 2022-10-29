<?php

function dateDifference($date1, $date2)
{
    $dateDiff = strtotime($date2) - strtotime($date1);
    return abs(round($dateDiff / 86400));
}

$date1 = '25-09-2020';
$date2 = '26-09-2020';

echo dateDifference($date1, $date2);
