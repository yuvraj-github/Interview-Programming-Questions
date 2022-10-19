<!-- 

    0 0 1
    0 1 0
    1 0 0

-->

<?php
$arrMatrix = array(array());
$rows = 3;
$cols = 3;
for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $cols; $j++) {
        if ($i + $j == $rows - 1) {
            $arrMatrix[$i][$j] = 1;
        } else {
            $arrMatrix[$i][$j] = 0;
        }
        echo $arrMatrix[$i][$j] . ' ';
    }
    echo "\n";
}
