# CSE110: Object Oriented Programming Language
Section: 6
Time: 70 minutes (Problem Solving + Submission)

1. Design a class named Rectangle to represent a rectangle. The class contains:
■ Two double data fields named width and height that specify the width and height of the
rectangle. The default values are 1 for both width and height.
■ A no-arg constructor that creates a default rectangle.
■ A constructor that creates a rectangle with the specified width and height.
■ A method named getArea() that returns the area of this rectangle.
■ A method named getPerimeter() that returns the perimeter.
Write a test program that creates two Rectangle objects - one with width 4 and height 40 and
the other with width 3.5 and height 35.9. Display the width, height, area, and perimeter of
each rectangle in this order.

2. Design a class named Account that contains:
■ A private int data field named id for the account (default 0).
■ A private double data field named balance for the account (default 0).
■ A private double data field named monthlyInterestRate that stores the cur-rent interest rate
(default 0). Assume all accounts have the same interest rate.
■ A no-arg constructor that creates a default account.
■ A constructor that creates an account with the specified id and initial balance.
■ The setter and getter methods for id, balance, and annualInterestRate.
■ A method named getMonthlyInterestRate() that returns the monthly interest rate.
■ A method named getMonthlyInterest() that returns the monthly interest.
■ A method named withdraw that withdraws a specified amount from the account.
■ A method named deposit that deposits a specified amount to the account.
Write a test program that creates an Account object with an account ID of 1122, a balance of
$20,000, and an monthly interest rate of 4.5%. Use the withdraw method to withdraw $2,500,
use the deposit method to deposit $3,000, and print the balance, the monthly interest, and the
date when this account was created.
