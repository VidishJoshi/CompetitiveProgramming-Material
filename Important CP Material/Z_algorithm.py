# implementation of Z Algorithm
def ZAlgorithm():
    n = len(s)
    Z = [0] * n
    L = 0
    R = 0
    for i in range(1, n):
        if i > R:
            L = R = i
            while R < n and s[R-L] == s[R]:
                R += 1
            Z[i] = R-L
            R -= 1
        else:
            k = i-L
            if Z[k] < R-i+1:
                Z[i] = Z[k]
            else:
                L = i
                while R < n and s[R-L] == s[R]:
                    R += 1
                Z[i] = R-L
                R -= 1
    return Z