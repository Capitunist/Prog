import random, time

France = {"Name": "France", "ID":1, "HP": 600, "Def": 10, "Atk": 10, "Nukes": 10, "Speed": 7}
Germany = {"Name": "Germany", "ID": 2, "HP": 650, "Def": 12, "Atk": 8, "Nukes": 0, "Speed": 12}
Italy = {"Name": "Italy", "ID": 3, "HP": 400, "Def": 8, "Atk": 7, "Nukes": 0, "Speed": 8}
Spain = {"Name": "Spain", "ID": 4, "HP": 450, "Def": 7, "Atk": 6, "Nukes": 0, "Speed": 7}
UK = {"Name": "UK", "ID": 5, "HP": 600, "Def": 12, "Atk": 9, "Nukes": 8, "Speed": 7}


print(France["Name"],"vs",Germany["Name"])
time.sleep(1)

while France["HP"] > 0 and Germany["HP"] > 0:
	if France["Speed"] > Germany["Speed"]:
		chance = random.randint(1,100)
		print(chance)
		if chance > 94:
			if France["Nukes"] > 0:
				Germany["HP"] -= 10*France["Atk"]+(Germany["Def"]/10)
				print("France used 1 nuke.")
		else:
			Germany["HP"] -= France["Atk"]+(Germany["Def"]/10)
			print("France deals",France["Atk"],"dmg","Germany has",Germany["HP"],"HP left.")
	else:
		chance = random.randint(1,100)
		print(chance)
		if chance > 94:
			if Germany["Nukes"] > 0:
				France["HP"] -= 10*Germany["Atk"]+(France["Def"]/10)
				print("Germany used 1 nuke.")
		else:
			France["HP"] -= Germany["Atk"]+(France["Def"]/10)
			print("Germany deals",Germany["Atk"],"dmg","France has",France["HP"],"HP left.")