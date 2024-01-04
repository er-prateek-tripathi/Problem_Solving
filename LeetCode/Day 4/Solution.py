def is_anagram(s, t):
    """Determines if two strings are anagrams."""

    # Handle cases where lengths are different or strings contain non-letter characters:
    if len(s) != len(t) or not s.isalpha() or not t.isalpha():
        return False

    # Create a dictionary to count letter frequencies in the first string:
    char_counts = {}
    for char in s:
        char_counts[char] = char_counts.get(char, 0) + 1

    # Decrement counts for letters in the second string:
    for char in t:
        if char not in char_counts or char_counts[char] == 0:
            return False
        char_counts[char] -= 1

    # If all counts are 0, the strings are anagrams:
    return all(count == 0 for count in char_counts.values())


print(is_anagram("anagram", "nagaram"))  # Output: True
print(is_anagram("rat", "car"))         # Output: False
print(is_anagram("listen", "silent"))   # Output: True
