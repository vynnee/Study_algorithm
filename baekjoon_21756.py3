number_list = list()
number = int(input())

for i in range(number):
    number_list.append(i+1)

while len(number_list) != 1:
    del number_list[0::2]
    
print(number_list[0])