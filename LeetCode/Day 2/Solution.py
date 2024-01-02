def find_the_diff(s, t):
    """
    Finds the letter that was added to t.

    Args:
        s: The original string.
        t: The shuffled string with an added letter.

    Returns:
        The letter that was added to t.
    """

    # Optimized approach using XOR:
    result = 0
    for char in s + t:
        result ^= ord(char)  # XOR each character's ASCII value
    return chr(result)  # Convert the XOR result back to a character

# Example usage
s = "abcd"
t = "abcde"
added_letter = find_the_diff(s, t)
print(f"The letter that was added to t is: {added_letter}")
