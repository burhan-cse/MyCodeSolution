n,m = map(int,input().split(' '))
ar = list(map(int, input().split(' ')))
mx = 0
for i in range(m):
    x, y = map(int, input().split(' '))
    mx = mx+min(ar[x-1], ar[y-1])
print(mx)