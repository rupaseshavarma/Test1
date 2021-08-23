print('enter the numbers and enter n to stop entering')
c='y'
result=0
while c!='n':
    print('enter number')
    k=int(input())
    result=result+k
    print('enter y to continue \'n\' to discontinue')
    c=input()

print('The sum of numbers is :',result)
