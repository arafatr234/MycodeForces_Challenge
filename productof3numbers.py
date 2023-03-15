t = int(input())
for i in range(t):
    n = int(input())
    if n % 2 == 0:
        print("YES")
        print(2, 2, n//4)
    elif n % 3 == 0:
        print("YES")
        print(3, 3, n//9)
    else:
        print("NO")
