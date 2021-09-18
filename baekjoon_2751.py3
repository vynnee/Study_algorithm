n = int(input())
list = []

for i in range(n):
    a = int(input())
    list.append(a)
    
list = sorted(list)

for i in range(n):
    print(list[i])