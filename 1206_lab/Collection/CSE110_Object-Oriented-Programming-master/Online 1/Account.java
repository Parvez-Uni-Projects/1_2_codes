package com.company;

public class Account {
    private int id = 0;
    private double balance = 0.0;
    private double monthlyInterestRate = 0.0;

    public Account(){
        this.id=0;
        this.balance=0;
    }
    public Account(int id, double balance) {
        this.id = id;
        this.balance = balance;
    }
    public int getId() {
        return this.id;
    }
    public double getBalance() {
        return this.balance;
    }
    public double getMonthlyInterestRate() {
        return monthlyInterestRate;
    }
    public void setId(int id) {
        this.id = id;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
    public void setMonthlyInterestRate(double monthlyInterestRate) {
        this.monthlyInterestRate = monthlyInterestRate;
    }
    public void withdraw(double amount) {
        this.balance -= amount;
    }
    public void deposit(double amount) {
        this.balance += amount;
    }
    public double monthlyInterestRate(){
        return (balance*100)/12;
    }
    public double getMonthlyInterest() {
        return balance + getMonthlyInterestRate();
    }

    public static void main(String[] args) {
        Account a1=new Account(1122,20000);
        a1.monthlyInterestRate=4.5;
        System.out.println(a1.balance);
        System.out.println(a1.monthlyInterestRate());
    }

}
