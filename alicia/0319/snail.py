import sys
# sys means system specific parameters and functions

def snail_climbs(up, down, tree):
    if up >= tree:
        return 1
    
    delta = (up - down)
    days = (tree - up) // delta
    # // in divmod()

    if (tree - up) % delta == 0:
        return days + 1
    else:
        return days + 2
    # % in divmod()

if __name__ == "__main__":
    up, down, tree = map(int, sys.stdin.readline().split())
    print(snail_climbs(up, down, tree))