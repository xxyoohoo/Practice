x = 0
y = 0
import sys

for line in sys.stdin:
    z = list(map(int, line.split()))
    if len(z) == 2:
        x, y = z
        print(max(x, y) - min(x, y))
