x = int(input("premier chiffre\n"))
y = int(input("le deuxième\n"))
z = int(input("calcul fdp (1:addition,2:soustraction,3:multiplication,4:division\n"))

if z == 1:
	res=x+y
	print(x,"+",y,"=",res)
elif z == 2:
	res=x-y
	print(x,"-",y,"=",res)
elif z == 3:
	res=x*y
	print(x," fois ",y,"=",res)
elif z == 4:
	res=x/y
	print(x,"/",y,"=",res)
else:
	print("chiffre entre 1 et 4 fdp va")