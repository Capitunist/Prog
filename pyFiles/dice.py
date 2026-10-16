import random

dice1 = random.randint(1,6)
dice2 = random.randint(1,6)
dice3 = random.randint(1,6)
dice4 = random.randint(1,6)
dice5 = random.randint(1,6)
err = True

listeDés = [dice1,dice2,dice3,dice4,dice5]

print("Liste des dés lancés: ",listeDés)

while err == True:
	choixdé = int(input("Quel dé relancer ? "))
	if choixdé is not int:
		raise ValueError("Une erreur est survenue: Veuillez entrer un chiffre.")
	match choixdé:
		case 1:
			dice1 = random.randint(1,6)
			err = False
		case 2:
			dice2 = random.randint(1,6)
			err = False
		case 3:
			dice3 = random.randint(1,6)
			err = False
		case 4:
			dice4 = random.randint(1,6)
			err = False
		case 5:
			dice5 = random.randint(1,6)
			err = False
		case _:
			print("Erreur: Veuillez entrer une valeur entre 1 et 5.")
			err = True

listeDés = [dice1,dice2,dice3,dice4,dice5]
print("Nouvelle liste des dés lancés: ",listeDés)
