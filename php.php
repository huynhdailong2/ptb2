<?php
if ($a == 0) {
    if ($b == 0) {
        if($c == 0){
            echo ("Phuong trinh vo so nghiem");
        }else{
            echo ("Phuong trinh vo nghiem");
        }
    } else {
        echo ("Phương trình có một nghiệm: x = " . (- $c / $b));
    }
    return;
}else{
    $delta = $b * $b - 4 * $a * $c;
    $x1 = "";
    $x2 = "";
    if ($delta > 0) {
        $x1 = (- $b + sqrt ( $delta )) / (2 * $a);
        $x2 = (- $b - sqrt ( $delta )) / (2 * $a);
        echo ("Phương trình có 2 nghiệm là: " . "x1 = " . $x1 . " và x2 = " . $x2);
    } else if ($delta == 0) {
        $x = (- $b / (2 * $a));
        echo ("Phương trình có nghiệm kép: x1 = x2 = " . $x);
    } else {
        echo ("Phương trình vô nghiệm!");
    }
}
?>