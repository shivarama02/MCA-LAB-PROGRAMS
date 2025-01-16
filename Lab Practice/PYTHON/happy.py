def sum_of_squares(n):
    """Calculate the sum of the squares of the digits of n."""
    total = 0
    while n > 0:
        digit = n % 10
        total += digit ** 2
        n //= 10
    return total

def is_happy_number(n, max_steps=4):
    """Determine if a number is happy within a given number of steps."""
    for step in range(max_steps):
        n = sum_of_squares(n)
        print(f"Step {step + 1}: {n}")
        if n == 1:
            return True
    return False

# Input number
number = int(input("Enter a number: "))

# Check if the number is happy or unhappy
if is_happy_number(number):
    print(f"{number} is Happy within 4 steps.")
else:
    print(f"{number} is Unhappy within 4 steps.")
