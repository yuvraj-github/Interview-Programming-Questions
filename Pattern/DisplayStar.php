<!-- 

    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
-->
<?php

function printStar($n) {
	for($i=1; $i<=$n; $i++) {
		for($j=0; $j<$i; $j++) {
			echo '*'.' ';
		}
		echo "\n";
	}
}
printStar(5);