<?php
  $servername = "localhost";
  $username = "root";
  $password = "Sasta@25052";
  $dbname = "LMS";

  $conn = new mysqli($servername, $username, $password, $dbname);

  $query1 = "SELECT * from Student;";
  $details = $conn->query($query1);
?>
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Home</title>
  </head>
  <style>
    table {
      position: absolute;

    }
  </style>
  <body>
    <table width="230" border="1" cellspacing="1" cellpadding="4">
    <tr>
      <th>Student Id</th>
      <th>Student Name</th>
      <th>Student Department</th>
    </tr>
    <?php
      while($row = $details->fetch_assoc()) {
        echo "<tr>";
         echo "<td>".$row["Sid"]."</td>";
         echo "<td>".$row["Sname"]."</td>";
         echo "<td>".$row["Sdept"]."</td>";
         echo "</tr>";
      }
    ?>
    </table>  
  </body>
</html>
