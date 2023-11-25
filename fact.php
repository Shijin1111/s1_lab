<?php
include 'connection.php';
if($_POST)
{    
    $num=$_POST['num'];
    $fact=1;
    echo "factorial of $num is ";
    for($i=0;$i<$fact;$i++)
    {
        $fact=$fact*$i;
    }        
    echo $fact;
}
?>