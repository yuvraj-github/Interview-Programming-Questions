<!-- 

Input: racecar  a

Output: 2
 -->

<?php 

function countOccurences($str, $chr) {
	$strLength = strlen($str);
	$count =0;
	for($i=0; $i<$strLength; $i++) {
		if($str[$i] == $chr) {
			$count++;
		}
	}
	return $count;
}

$str = 'racecar';
echo countOccurences($str, 'a');