dict_lst = {} 
for _ in range(int(input())):
     name = input()
     score = float(input())  
     if score in dict_lst:
        dict_lst[score].append(name)
     else: dict_lst[score] = [name]
    
dict_lst = sorted(dict_lst.items())
for i in sorted(dict_lst[1][1]):
    print(i)
