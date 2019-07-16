n=int(input())
str=input()
v=('aeiou')
for x in str:
     if x in v:
            str=str.replace(x,"")
print(str)           
        
    
