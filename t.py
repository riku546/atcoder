def c():
    n = int(input())
    a = list(map(int, input().split()))
    b = a[1] // a[0]
    for i in range(1, n - 1):
        if a[i + 1] // a[i] != b:
            print("No")
            return
    print("Yes")

c();