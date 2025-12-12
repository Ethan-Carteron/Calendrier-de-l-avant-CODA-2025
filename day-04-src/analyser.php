<?php

$lines = file('data', FILE_IGNORE_NEW_LINES | FILE_SKIP_EMPTY_LINES);

$score = [];

foreach ($lines as $line) {
    if (is_int($line)) {
        $score[$elfName] += (int)$line;
    } else if (is_string($line)) {
        $elfName = $line;
        if () {
            $score[$elfName] = 0;
        }
    } else {
        echo "Invalid data format";
    }
}

arsort($score);

$i = 1;

foreach ($score as $winnerName => $winnerScore) {
    echo $i . ": " . $winnerName . " avec " . $winnerScore . " points\n";
    
    if ($i >= 3) {
        break;
    }
    $i++;
}