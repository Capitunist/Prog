-- COURS HASKELL
-- Ce fichier contient des expressions et fonctions que l'on a vu en cours
-- ---------------------------------------------------------------------------------
-- Séance 2
-- ---------------------------------------------------------------------------------
-- Fonction doubler
-- doubler x = x + x

-- ---------------------------------------------------------------------------------
-- Fonction quadrupler
-- quad = doubler (doubler x)

-- ---------------------------------------------------------------------------------
-- Fonction parité
parite n = if mod n 2 == 0 then "pair" else "impair"

-- exercice: Écrire la fonction maxi renvoyant le maximum de ses 2 paramètres.
maxi x y = if x>=y then x else y

-- ---------------------------------------------------------------------------------
-- Récursivité
u n = if n == 0 then 1 else 2 * u (n-1) + 3

-- exercice: Écrire en Haskell la suite définie par récurrence suivante :
-- {v0=2
-- {vn=3⋅un−1−1,∀n≥1
v n = if n == 0 then 2 else 3 * u (n-1) - 1

-- ---------------------------------------------------------------------------------
-- Récursivité pour répéter
-- Suite de Fibonacci
fibo n = if n < 2 then n else fibo (n-2) + fibo (n-1)

-- exercice: produit des nombres de 1 à n
factor n = if n == 1 then 1 else n * factor (n - 1)

-- ---------------------------------------------------------------------------------
-- Listes
-- let l1 = [56,96,109,283,3984]

-- Fonction incrémenter les éléments d'une liste
incrementerListe liste = if liste == [] then [] else (head liste + 1) : incrementerListe (tail liste)

-- ---------------------------------------------------------------------------------
-- Séance 3
-- ---------------------------------------------------------------------------------

-- renvoie le dernier élément de la liste (cf. last)
dernierListe liste = if length liste == 1 then liste!!0 else dernierListe (tail liste)

-- renvoie les éléments de la liste sauf le dernier (cf. init)
debut li = if length li == 1 then [] else (head li) : debut (tail li)

-- la fonction Map permet de traiter une fonction de manière récursive

-- exemple:
ajouter x = x + 1
map ajouter [1,4,7]
--renverra [2,5,8]

-- la fonction Lambda ('\') permet de définir une fonction qui sera utilisée que dans le cadre d'une autre fonction (comme map par exemple)

--exemple:
(\x -> x +1) [1,2,3,4]
-- renverra [2,3,4,5]

-- la fonction Filter ne prend en paramètres que des éléments de mêmes types et filtre selon la fonction mise en paramètre

-- exemple:
filter (\x -> mod x 2 == 0) [1,2,3,4,5,6,7]
-- renverra [2,4,6]

-- la fonction Foldl (pliage) 