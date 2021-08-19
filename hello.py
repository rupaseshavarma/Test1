#hello
print('\nHello world\n')

#indexes and strings

message='Hello world'#here message acts as a string variable

#indexing using a string variable also used for string splicing

print(message[2])#this prints the character at given index
print(message[1:])
print(message[1:])


#string functions or methods
print(message.count('o'))#counts the character occurance in string
print(len(message))
print(message.find('o'))#find return the index of srtring occurance
print(message.lower())#lower function converts the string into lower case
print(message.upper())#upper function converts string to upper case

#formatting a string means printing it ina particular order using format function()

Greeting='Hola'

name='Varma'

outstr='{}, {}. Welcome!'.format(Greeting,name)
outfstr=f'{Greeting}, {name}. Wellcome!'
print(outstr,outfstr)


