def count_favorite_singers(playlist):
    """Counts the number of singers with the most songs in the playlist.

    Args:
        playlist: A list of integers representing the singers of each song.

    Returns:
        The number of singers with the most songs.
    """

    singer_counts = {}
    for singer in playlist:
        singer_counts[singer] = singer_counts.get(singer, 0) + 1

    max_count = max(singer_counts.values())
    return sum(count == max_count for count in singer_counts.values())


# Get input
n = int(input())
playlist = list(map(int, input().split()))

# Count favorite singers
result = count_favorite_singers(playlist)

# Print output
print(result)
