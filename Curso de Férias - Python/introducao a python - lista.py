Python 3.6.2 (v3.6.2:5fd33b5, Jul  8 2017, 04:14:34) [MSC v.1900 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> Python 3.6.2 (v3.6.2:5fd33b5, Jul  8 2017, 04:14:34) [MSC v.1900 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> lista = []
print (lista)
lista2 = [1,'A','2+3j',['ab','CD']]
print (lista2)
lista2[0]
lista2[2]
lista2[3]
lista2[-1]
lista2[0] = 2
lista2
SyntaxError: multiple statements found while compiling a single statement
>>> lista = []
>>> lista2 = [1,'A','2+3j',['ab','CD']]
>>> print (lista2)
[1, 'A', '2+3j', ['ab', 'CD']]
>>> print list
SyntaxError: Missing parentheses in call to 'print'
>>> print (lista)
[]
>>> clear
Traceback (most recent call last):
  File "<pyshell#6>", line 1, in <module>
    clear
NameError: name 'clear' is not defined
>>> cls
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    cls
NameError: name 'cls' is not defined
>>> File "<pyshell#7>", line 1, in <module>
SyntaxError: invalid syntax
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 

>>> 

>>> 
>>> 


>>> 
>>> 

>>> 

>>> 
>>> 

>>> 

>>> 
>>> 


>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> 
>>> lista2 = [0]*4
>>> lista2
[0, 0, 0, 0]
>>> lista2=lista2+[1]*3
>>> lista2
[0, 0, 0, 0, 1, 1, 1]
>>> lista2 = [1,'A','2+3j',['ab','CD']]
>>> del lista2[2]
>>> lista2
[1, 'A', ['ab', 'CD']]
>>> del lista2[2][1]
>>> lista2
[1, 'A', ['ab']]
>>> lista2 = [1,'A','2+3j',['ab','CD']]
>>> lista2[1:]
['A', '2+3j', ['ab', 'CD']]
>>> lista2[:1]
[1]
>>> lista2[1:2]
['A']
>>> lista2[0:-1]
[1, 'A', '2+3j']
>>> lista =[1,'y',['ab]','CD']]
>>> lista [1:1]=['z']
>>> lista
[1, 'z', 'y', ['ab]', 'CD']]
>>> lista[1:3] = [['x']]
>>> lista
[1, ['x'], ['ab]', 'CD']]
>>> lista [1:-1]=[2,3,4]
>>> lista
[1, 2, 3, 4, ['ab]', 'CD']]
>>> lista[:2] = 'xyz'
>>> lista
['x', 'y', 'z', 3, 4, ['ab]', 'CD']]
>>> print lista[5][1]
SyntaxError: Missing parentheses in call to 'print'
>>> lista[5][1]
'CD'
>>> a = ['a', 2, 3, 'd', 'x']
>>> a[:3:2]
['a', 3]
>>> a[::-1]
['x', 'd', 3, 2, 'a']
>>> l = [1,2,3,4,5]
>>> l [0::2] = ['x','y','z']
>>> l
['x', 2, 'y', 4, 'z']
>>> lista3 = [1,'a','bc']
>>> 1 in lista3
True
>>> 2 in lista3
False
>>> 'b' in lista3
False
>>> vetor = []
>>> vetor =[None]*5
>>> vetor
[None, None, None, None, None]
>>> listaTest = list('alo')
>>> listaTest
['a', 'l', 'o']
>>> join(listaTest)
Traceback (most recent call last):
  File "<pyshell#77>", line 1, in <module>
    join(listaTest)
NameError: name 'join' is not defined
>>> join[listaTest]
Traceback (most recent call last):
  File "<pyshell#78>", line 1, in <module>
    join[listaTest]
NameError: name 'join' is not defined
>>> .join(listaTest)
SyntaxError: invalid syntax
>>> range
<class 'range'>
>>> for
SyntaxError: invalid syntax
>>> range(3)
SyntaxError: invalid syntax
>>> 
>>> 
>>> for i in range(1,7): print (i)

1
2
3
4
5
6
>>> for i in range(1,7): print i
SyntaxError: invalid syntax
>>> for i in range(1,7): print (i)

1
2
3
4
5
6
>>> is
SyntaxError: invalid syntax
>>> list.reverse
<method 'reverse' of 'list' objects>
>>> append
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    append
NameError: name 'append' is not defined
>>> append()
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    append()
NameError: name 'append' is not defined
>>> count
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    count
NameError: name 'count' is not defined
>>> extend
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    extend
NameError: name 'extend' is not defined
>>> index
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    index
NameError: name 'index' is not defined
>>> insert
Traceback (most recent call last):
  File "<pyshell#15>", line 1, in <module>
    insert
NameError: name 'insert' is not defined
>>> po
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    po
NameError: name 'po' is not defined
>>> pop*
SyntaxError: invalid syntax
>>> remove
Traceback (most recent call last):
  File "<pyshell#18>", line 1, in <module>
    remove
NameError: name 'remove' is not defined
>>> reverse
Traceback (most recent call last):
  File "<pyshell#19>", line 1, in <module>
    reverse
NameError: name 'reverse' is not defined
>>> sort
Traceback (most recent call last):
  File "<pyshell#20>", line 1, in <module>
    sort
NameError: name 'sort' is not defined
>>> 
