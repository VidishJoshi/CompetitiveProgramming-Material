#python program to implement the chinese remainder theorem
def extended_gcd(a,b,x,y):
    if b == 0:
        x = 1
        y = 0
        return a
    else:
        x1 = 1
        y1 = 0
        gcd = extended_gcd(b, a % b, x1, y1)
        x = y1
        y = x1 - (a // b) * y1
        return gcd

def mod_inv(a, m):
    x, y = 0, 1
    gcd = extended_gcd(a, m, x, y)
    if gcd != 1:
        return None  # modular inverse does not exist
    else:
        return x % m


def chinese_remainder(a, n, m):
    prod = 1
    for i in range(len(n)):
        prod *= n[i]
    sum = 0
    for i in range(len(n)):
        p = prod // n[i]
        sum += a[i] * mod_inv(p, m[i]) * p
    return sum % prod


def main():
    a = [2, 3, 5]
    n = [7, 11, 13]
    m = [3, 11, 17]
    print(chinese_remainder(a, n, m))

main()