
<?php
$con=mysqli_connect('localhost','root','','student');
if($con)
{
    echo "connection successfull";
}
else{
    echo "connection failed";
}

if($_POST)
{
    $roll=$_POST['roll'];
    $name=$_POST['name'];
    $mark=$_POST['mark'];
    $sq="INSERT INTO stud VALUES('$roll','$name','$mark')";
    if(mysqli_query($con,$sq))
    {
        echo "data inserted";
    }
    else{
        echo "data not inserted";
        }
        
}
?>