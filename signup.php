<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="signup.css">
</head>
<body>
    <div class="login">
        <form action="feedback.php" method="POST" target="_blank">
        <p id="signupp">Sign in</p>
        <fieldset>
            <legend>General information</legend>
            <label for="name">First name</label><br>
            <input type="text" name="fname" id="login" placeholder="First name" required title="Please input your firstname to continue"><br>
            <hr>
            <label for="lname">Last name</label><br>
            <input type="text" name="lname" id="login" placeholder="Last name" required title="Please input your lastname to continue"><br>
            <hr>
            <label for="DOB">Date of birth</label><br>
            <input type="date" id="login" name="dob">
            <hr>
            <label for="phonenumber">Phone number</label><br>
            <input type="tel" name="phonenumber" id="login" placeholder="Phone number" required title="Please input your username to continue" min="10" max="14"><br>
            <hr>
            <label for="guardian">Parents /Guardian's information</label><br>
            <input type="text" name="guardian" placeholder="Enter guardians name" id="login"><br>
            <hr>
            <input type="tel" name="guardiantel" placeholder="Enter guardians' phone number" min="10" max="14" id="login"><br>
            <hr>
            <label for="gender">Gender</label><br>
            <input type="radio" name="gender" value="Female" id="login"required title="Please select your gender to continue">Female<br>
            <input type="radio" name="gender" value="Male" id="login"required title="Please select your gender to continue">Male<br>
           <hr>
           <label for="continent">Residence</label>
            <select name="continent" required id="login">
                <option value="Africa">Africa</option>
                <option value="Asia">Asia</option>
                <option value="Europe">Europe</option>
                <option value="South America">South America</option>
                <option value="North America">North America</option>
                <option value="Australia">Australia</option>
                <option value="Antartica">Antartica</option>               
            </select>
            <hr>
            <label for="country">Country of Citizenship</label>
            <input type="text" name="country" placeholder="country" id="login">
        </fieldset>
        <fieldset>
            <legend>Login credentials</legend>
            <label for="email">Email</label><br>
            <input type="email" name="email" id="login" placeholder="email@gmail.com" required title="Please input your username to continue"><br>
            <hr>
            <label for="username">Username</label><br>
            <input type="text" name="username" id="login" placeholder="Username" required title="Please input your username to continue"><br>
            <hr>
            <label for="password">Password</label><br>
            <input type="password" name="password" id="login" minlength="8" maxlength="15" placeholder="Password" required title="Please input your password to continue"><br>
            <hr>
        </fieldset>
        <label for="wish">How would you like us to enhance on this website</label><br>
        <textarea type="text" minlength="10" max length="100" name="wish"></textarea> <br>
       <label for="rate">Rate this website</label><br>
       <input type="range" name="rate" min="20" max="100" required title="Please rate this website to continue"><br>
        <input type="submit" value="Sign up" readonly id="btn"><br>
        <p>Already have an account, <a href="login.html">Click Here</a> to login</p>        
        </form>
    </div>

</body>
</html>
