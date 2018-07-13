# pythonbegineer
#msmidhun
1. Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5,
between 2000 and 3200 (both included).
solution:
if __name__ == '__main__':
	for x in range(2000,3201):
		if(x%7==0):
			if(x%5!=0):
				print(x)

2.Write a program which can compute the factorial of a given numbers.

if __name__ == '__main__':
	fact=1
	n=input("Enter number  ")
	n=int(n)
	if(n>0):
		while(n>0):
			fact=fact*n
			n=n-1
		print("Factorial of given number is ",fact)
	else:
		print("Enter valid number")

3.With a given integral number n, write a program to generate a dictionary that contains (i, i*i) such that is an integral number between 1 and n (both included). and then the program should print the dictionary.

if __name__ == '__main__':
	r=int(input("Enter range"))
	d={}
	for x in range(1,r):
		 d[x]=x*x
	print(d)

4.Write a program which accepts a sequence of comma-separated numbers from console and generate a list and a
 tuple which contains every number.
Suppose the following input is supplied to the program:
34,67,55,33,12,98
Then, the output should be:
['34', '67', '55', '33', '12', '98']
('34', '67', '55', '33', '12', '98') 
if __name__ == '__main__':
	num=input("Enter numbers by comma comma-separated")
	num1=()
	num2=[]
	num2=num.split(",")
	num1=tuple(num2)
	print(num2)
	print(num1)
  
4. Define a class which has at least two methods:
getString: to get a string from console input
printString: to print the string in upper case.
Also please include simple test function to test the class methods.

Hints:
Use __init__ method to construct some parameters

Class is a set or category of things having some property or attribute in common and differentiated from others by kind,
 type, or quality.

In technical terms we can say that class is a blue print for individual objects with exact behaviour.

Object :

object is one of instances of the class. which can perform the functionalities which are defined in the class.

self :
self represents the instance of the class. By using the "self" keyword we can access the attributes and methods of 
the class in python.

__init__ :

"__init__" is a reseved method in python classes. It is known as a constructor in object oriented concepts.
 This method called when an object is created from the class and it allow the class to initialize the attributes of a class. '''

class inputoutstring(object):
    def __init__(self):
        self.s = ""

    def getstring(self):
        self.s = input()

    def printstring(self):
        print (self.s.upper())

strObj = inputoutstring()
strObj.getstring()
strObj.printstring()
   
