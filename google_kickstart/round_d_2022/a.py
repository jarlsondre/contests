T = int(input())

for i in range(T): 
    n, m = [int(d) for d in input().split(" ")]
    regions = [int(d) for d in input().split(" ")].sorted()
    temp = [[] for i in range(m)]
    for j in range(len(regions)):
        temp[j % m].append(regions[j])



