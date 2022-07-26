T = int(input())

for i in range(T):
	L, R = [int(k) for k in input().split()]
	m = min(L, R)
	print(f"Case #{i + 1}: {int(m*(m+1)/2)}")
