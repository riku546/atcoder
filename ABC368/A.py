def sample(N, K, A):
    temp1 = []
    temp2 = []
    for i in range(len(A) - K, len(A)):
        temp1.append(A[i])

    for j in range(len(A) - K):
        temp2.append(A[j])

    for m in temp1 + temp2:
        print(m, end=" ")
    
    print()


N, K = list(map(int, input().split()))
A = list(map(int, input().split()))


sample(N, K, A)
