def find_max_border(table):
    n, m = len(table), len(table[0])
    max_border = 0

    # Check rows and columns for maximum consecutive black cells
    for row in table:
        max_border = max(max_border, max_consecutive_black(row))
    for col in zip(*table):
        max_border = max(max_border, max_consecutive_black(col))

    return max_border

def max_consecutive_black(cells):
    count = 0
    max_count = 0
    for cell in cells:
        if cell == '#':
            count += 1
            max_count = max(max_count, count)
        else:
            count = 0
    return max_count

# Get test cases and process each one
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    table = [input() for _ in range(n)]
    max_border = find_max_border(table)
    print(max_border)
