

list1 = []
for i in range(3):
    list1.append(int(input()))

list2 = []
size_of_list2 = list1[0]
for i in range(size_of_list2):
    list2.append(int(input()))


min_sub = list1[1]
max_sub = list1[2]

size_of_sub = max_sub - min_sub

max_sum = 1
temp_max = 1

for i in range(size_of_list2-1):
    max_sub = i + size_of_sub
    if max_sub > size_of_list2:
        max_sub = size_of_list2
    min_sub = i
    
    while(min_sub < max_sub):

        if min_sub == max_sub:
            if list2[min_sub] > max_sum:
                max_sum = list2[min_sub]
        else:
            temp_max = sum(list2[min_sub:max_sub+1])
            if temp_max > max_sum:
                max_sum = temp_max
        min_sub += 1

print(max_sum)