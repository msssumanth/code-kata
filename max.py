str=input()
count=dict()
for i in str:
    if i not in count:
        count[i]=1
    else:
        count[i]+=1
        
print(max(count))
        
