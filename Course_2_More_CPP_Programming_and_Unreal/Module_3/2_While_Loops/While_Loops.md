# Exercise 9
## While Loops

### Problem 1 – Keep track of max input value

Create a new C++ project named whatever you want in Visual Studio using the Windows Desktop Wizard or in Xcode.

While the user hasn't entered -1, prompt for and get an integer from the user.

After the user enters -1, print the maximum number they entered (be sure to exclude -1).

If the user entered -1 as their first input, print an appropriate message instead of printing their max input (since they didn't input any numbers except to quit).

Hint 1: If you want to initialize the max user input to the minimum possible `int`, you should set it to `std::numeric_limits<int>::min()`.  look at the `<limits>` documentation

Hint 2: You can use a bool to keep track of whether or not the user entered anything other than -1.