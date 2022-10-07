def gray_code(x):
    return x ^ (x >> 1)

def inverse_gray_code(x):
    h = 1
    res = 0
    while x:
        if x & 1:
            res ^= h
        h <<= 1
        x >>= 1