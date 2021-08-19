#A number which meets the below three conditions
print('enter a numer')
num=str(input())
if num[0]=='7' or num[1]=='7':
    print('special')
elif int(num[0])+int(num[1])==7:
    print('special')
elif int(num)%7==0:
    print('special')
else:
    print('Normal number')
