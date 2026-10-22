import random
import time
import os

def attack_phase(pv:int,strength:int,speed:int,stand:list,pv_enemy:int,strength_enemy:int,speed_enemy:int)->None:
    while pv_enemy > 0 and pv > 0:
        time.sleep(2)
        print("|------------------------------------------------------------------------------|")
        print()
        print("\033[1;31mEnemy's turn:\033[0m")
        print("[Your " + stands[stand] + " has \033[1;32m" + str(pv) + "\033[0m hp]")
        dodge = random.randint(0,101)
        # print("Dodge value:",dodge," | Luck value:",speed*2.5)
        if dodge < speed*2.5:
            print("You \033[1;35mdodged\033[0m the enemy's attack")
        else:
            pv = pv - strength_enemy
            print("The enemy \033[1;33m" + stands[stand_enemy] + "\033[0m deals \033[1;31m" + str(strength_enemy) + "\033[0m dmg!")
            if pv <= 0:  # On vérifie si le perso a 0 pv
                print()
                print("|------------------------------------------------------------------------------|")
                print()
                print("\033[1;31mGAME OVER\033[0m")
                print()
                print("|------------------------------------------------------------------------------|")
                break
        print()
        time.sleep(2)
        print("|------------------------------------------------------------------------------|")
        print()
        print("\033[1;34mYour turn:\033[0m")
        print("[The enemy's " + stands[stand_enemy] + " has \033[1;32m" + str(pv_enemy) + "\033[0m hp]")
        dodge = random.randint(0, 101)
        # print("Dodge value:",dodge," | Luck value:",speed_enemy*2.5)
        if dodge < speed_enemy*2.5:
            print("The enemy \033[1;35mdodged\033[0m your attack")
        else:
            pv_enemy = pv_enemy - strength
            print("Your \033[1;33m" + stands[stand] + "\033[0m dealt \033[1;31m" + str(strength) + "\033[0m dmg to the enemy!")
            if pv_enemy <= 0:  # On vérifie si l'ennemi a 0 pv
                print()
                print("|------------------------------------------------------------------------------|")
                print()
                print("\033[1;32mEnemy defeated!\033[0m")
                print()
                print("|------------------------------------------------------------------------------|")
                break
        print()
    os.system('pause')

stands = ["Star Platinum", "Hierophant Green", "Silver Chariot", "Hermit Purple", "The Fool", "Magician's Red", "Cream", "The World", "King Crimson"]

# Initialiser les stats du perso
pv = random.randint(50,100)
strength = random.randint(1,11)
speed = random.randint(1,11)
stand = random.randint(0,len(stands)-1)
stat = [stands[stand],pv,strength,speed]

# Initialiser les stats de l'ennemi
pv_enemy = random.randint(50,100)
strength_enemy = random.randint(1,11)
speed_enemy = random.randint(1,11)
stand_enemy = random.randint(0,len(stands)-1)
stat_enemy = [stands[stand_enemy],pv_enemy,strength,speed]

print("\033[1;34mStand name:\033[0m",stat[0])
print("\033[1;34mHP:\033[0m",pv)
print("\033[1;34mStrength:\033[0m",strength)
print("\033[1;34mSpeed:\033[0m",speed,"")
print()
print("\033[1;31mEnemy stand name:\033[0m",stat_enemy[0])
print("\033[1;31mEnemy HP:\033[0m",pv_enemy)
print("\033[1;31mEnemy strength:\033[0m",strength_enemy)
print("\033[1;31mEnemy speed:\033[0m",speed_enemy,"\033[0m")
os.system('pause')

attack_phase(pv, strength, speed, stand, pv_enemy, strength_enemy, speed_enemy)