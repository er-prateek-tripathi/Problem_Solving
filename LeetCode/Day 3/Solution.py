class Solution():
    def strStr(self, haystack: str, needle: str) -> int:
            n, m = len(needle), len(haystack)
            for i in range(m - n + 1):
                if haystack[i:i + n] == needle:
                    return i
            return -1
    

# Example 1
haystack = "sadbutsad"
needle = "sad"
output = Solution().strStr(haystack, needle)
print(output)  # Output: 0

# Example 2
haystack = "leetcode"
needle = "leeto"
output = Solution().strStr(haystack, needle)
print(output)  # Output: -1
