"""
  Adds two binary numbers represented as strings.

  Args:
      num1 (str): The first binary number.
      num2 (str): The second binary number.

  Returns:
      str: The sum of the two binary numbers as a string.
"""
# Get the binary numbers from the user
num1 = input("Enter the first binary number: ")
num2 = input("Enter the second binary number: ")

# Convert the binary strings to integers (optional, for demonstration)
num1_int = int(num1, 2)
num2_int = int(num2, 2)

# Print the decimal representation of the numbers (optional, for demonstration)
print(f"num1 {num1_int} num2 {num2_int}")

# Add the integers (optional, for demonstration)
sum_int = num1_int + num2_int
print(sum_int)

# Convert the sum back to a binary string
sum_binary = bin(sum_int)[2:]  # Remove '0b' prefix

# Add the binary numbers and print the result

print(f"The sum of {num1} and {num2} is {sum_binary}")
