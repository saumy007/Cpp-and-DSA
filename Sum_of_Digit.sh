#!/bin/bash

# Input number
read -p "Enter a number: " number

# Initialize sum
sum=0

# Loop through each digit in the number
while [ $number -gt 0 ]; do
    digit=$((number % 10))  # Extract the last digit
    sum=$((sum + digit))    # Add the digit to the sum
    number=$((number / 10)) # Remove the last digit
done

echo "Sum of digits: $sum"
