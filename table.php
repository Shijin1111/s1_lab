<?php
include 'connection.php';
$sq="select * from stud";
$q=mysqli_query($con,$sq);
if(mysqli_num_rows($q))
{
    echo "<table border='1'>
    <tr>
        <th>Roll number</th>
        <th>Name</th>
        <th>mark</th>
    </tr>";
    while($row=mysqli_fetch_assoc($q))
    {
        echo "<tr>";
        echo "<td>".$row['roll_no']."</td>";
        echo "<td>".$row['name']."</td>";
        echo "<td>".$row['mark']."</td>";
        echo "</tr>";
    }
    echo "</table>";
}
?>