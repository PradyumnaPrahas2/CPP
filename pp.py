from itertools import combinations
l=[2,3,4,5,6,7]
target=7
ans=[]
for j in range(len(l)):
    for i in combinations(l,j):
        if(sum(i)==target):
            ans.append(list(i))
print(ans)