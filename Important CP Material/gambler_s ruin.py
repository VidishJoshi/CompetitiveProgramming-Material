def expo(x,n):
    if n==0:
        return 1
    if n&1:
        return x*expo(x, n-1)
    else:
        res = expo(x,n >> 1)
        return res*res

def gamblers_ruin(n1,n2,p,q):
    if fabs(p-q) <= 1e-9:
        return n2/(n1+n2)
    x = 1.0 - expo(q/p,n2)
    y = 1.0 - expo(q/p,n1+n2)
    return x/y