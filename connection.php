<?php
$con=mysqli_connect('localhost','root','','student');
if($con)
{
    echo "connection successfull";
}
else{
    echo "connection failed";
}
// $sq="insert into stud values(5,'sneha',46)";
// $p=mysqli_query($con,$sq);
// if($sq)
// {
//     echo "<script>
//     alert('data inserted')
//     </script>";
// }
// else{
//     echo "<script>
//     alert('data not inserted')
//     </script>";
// }
?>