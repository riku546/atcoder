def check_plus(i):
    return i > 0


def calc(A):
    # print(A)
    A[0] -= 1
    A[1] -= 1

    return A


def sample(N, A):
    count = 0
    A.sort(reverse=True)
    calced_A = calc(A)

    plus_len = len(list(filter(check_plus, calced_A)))

    count += 1

    while plus_len >= 2:
        A.sort(reverse=True)
        calced_A = calc(A)
        plus_len = len(list(filter(check_plus, calced_A)))
        count += 1


    return count


N = int(input())
A = list(map(int, input().split()))


print(sample(N, A))

