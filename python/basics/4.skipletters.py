# program to skip a letter in a word.  
print('enter the word')
strg=str(input())
print('enter the index of  the letter to be skipped ')
idx=int(input())
strg=strg[0:idx]+strg[idx+1:]
print(strg)
