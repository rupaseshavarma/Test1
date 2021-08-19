

#list and operation on it

contacts=['varma','mahesh','sai','srinivas','ajit'] #list

print(contacts)

#indexing in lists -1 will print the ending element irrespective of it's length
#contacts.append(),contacts.insert(index,'element or list'),contacts.extend(list)
#to remove items from list conatcts.remove('element') ,contacts.pop()
#sorting the list conatacts.reverse(),contacts.sort(),contacts.sort(reverse=True)
#sorting without altering the original using sorted(list name)---->function

print(contacts[0])

#using for loop to print list

for index,var in enumerate(contacts,start=1):
    print(index,var)

#using enumeration function we can also get the index of the element

#converting a list into a string by passing the list to a function join by a comma(,) separation

string=','.join(contacts)

print(string)
newlist=string.split(',')
print('newlist:',newlist)

#print('***Functions that can be used on lists')

#print(dir(contacts))

#List are mutable whereas tuples are immutable

my_tuple=('varma','sai','west','east')

#sets are unordered and to remove duplicate values and search for elements which other sets share

import datetime

today=datetime.date.today()
print(today)
