import random

# Programme de simulation d'étudiant

# Initialisation

notes = {"Maths": 0, "Sciences": 0, "Français": 0, "Histoire": 0, "EPS": 0}
j1 = [random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5)]
j2 = [random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5)]
j3 = [random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5)]
j4 = [random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5)]
j5 = [random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5),random.randint(0,5)]
j6 = [random.randint(0,5)]
j7 = [random.randint(0,5)]
EDT = [j1,j2,j3,j4,j5,j6,j7]

jour = 1
JourExam = 31
sommeil = 0
sommeilMax = 100
joie = 0
joieMax = 10

# Fonctions

def limite_var(sommeil, sommeilMax, joie, joieMax):
	'''fonction permettant de limiter les notes à 20/20'''
	if joie >= joieMax:
		joie = joieMax
	if sommeil >= sommeilMax:
		sommeil = sommeilMax
	if notes["Maths"] >= 20:
		notes["Maths"] = 20
	if notes["Sciences"] >= 20:
		notes["Sciences"] = 20
	if notes["Français"] >= 20:
		notes["Français"] = 20
	if notes["Histoire"] >= 20:
		notes["Histoire"] = 20
	if notes["EPS"] >= 20:
		notes["EPS"] = 20
	return joie, sommeil, notes["Maths"], notes["Sciences"], notes["Français"], notes["Histoire"], notes["EPS"]

def emploi_du_temps():
	'''fonction permettant de gérer les matières et l'emploi du temps'''
	for i in range (0,6):
		for j in range (0,7):
			match EDT:
				case i[0]:
					print("Cours de Maths | ",j,":00")
				case i[1]:
					print("Cours de Français | ",j,":00")
				case i[2]:
					print("Cours de Sciences | ",j,":00")
				case i[3]:
					print("Cours de Histoire | ",j,":00")
				case i[4]:
					print("Cours de Histoire | ",j,":00")
				case i[5]:
					print("Cours de EPS | ",j,":00")
	return 0

emploi_du_temps()