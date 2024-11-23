<?php
if($_SERVER["REQUEST_METHOD"]=="POST"){
    $fname=$_POST['fname'];
    $lname=$_POST['lname'];
    $dob=$_POST['dob'];
    $phonenumber=$_POST['phonenumber'];
    $guardian=$_POST['guardian'];
    $guardiantel=$_POST['guardiantel'];
    $gender=$_POST['gender'];
    $continent=$_POST['continent'];
    $country=$_POST['country'];
    $email=$_POST['email'];
    $username=$_POST['username'];
    $password=$_POST['password'];
    $wish=$_POST['wish'];
    $rate=$_POST['rate'];
    echo "

    <style>
    table,th,td{
    border: 1px solid;
    border-collapse: collapse;
    }</style>
        <h1> This is the submitted information</h1>
        <table>
        <thead>
        <th>General information</th>
        <th>Details</th>
        </thead>
        <tbody>
        <tr>
        <td>Names</td>
        <td>$fname  $lname</td>
        </tr>
        <tr>
        <td>Date of birth</td>
        <td>$dob</td>
        </tr>
        <tr>
        <td>Phone number</td>
        <td>$phonenumber</td>
        </tr>
        <tr>
        <td>Guardian</td>
        <td>$guardian</td>
        </tr>
        <tr>
        <td>Guardian's phone number</td>
        <td>$guardiantel</td>
        </tr>
        <tr>
        <td>Gender</td>
        <td>$gender</td>
        </tr>
        <tr>
        <td>Continet</td>
        <td>$continent</td>
        </tr>
        <tr>
        <td>Country</td>
        <td>$country</td>
        </tr>
        </body>
        </table>
        <hr>
        <table>
        <thead>
        <th>Login credentials</th>
        <th>Details</th>
        <tbody>
        <tr>
        <td>Email</td>
        <td>$email</td>
        </tr>
        <tr>
        <td>Username</td>
        <td>$username</td>
        </tr>
        <tr>
        <td>Password</td>
        <td>$password</td>
        </tr>
        <td>Suggestion</td>
        <td>$wish</td>
        </tr>
        <td>Rate</td>
        <td>$rate</td>
        </tr>
        </tbody>
        </table>
        <a href='signup.php'>Back</a>
    ";

}
?>
