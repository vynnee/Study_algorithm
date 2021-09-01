number_list = list() # 리스트
number = int(input()) # 정수 입력

# 리스트 채워주기
for i in range(number): # 0부터 number-1까지
    number_list.append(i+1) # 1부터 number까지 리스트에 넣어주기

while len(number_list) != 1: # 리스트의 원소가 1개가 아니면 계속 반복
    del number_list[0::2] # 0부터 시작해서 2씩 뛰어넘어 원소 삭제 -> 즉 홀수 삭제
    
print(number_list[0]) # 
