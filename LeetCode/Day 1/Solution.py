def mergeAlternately(word1: str, word2: str) -> str:
    merged_string = ""
    i, j = 0, 0
    while i < len(word1) or j < len(word2):
        if i < len(word1):
            merged_string += word1[i]
            i += 1
        if j < len(word2):
            merged_string += word2[j]
        j += 1
    return merged_string


print(mergeAlternately("abc", "pqr"))
