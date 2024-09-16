# Description
Fill up jug with 5 litre capacity
Pour water from it to 3 litre jug until 3 litre jug is full
Empty 3 litre jug
Pour water from 5 litre jug to 3 litre jug until 5 litre jug is empty
Fill 5 litre jug
Pour water from 5 litre jug to 3 litre jug until 3 litre jug is full
Water in 5 litre jug is now 4 lires

# Pseudocode

Declare waterIn5Litre, waterIn3Litre

waterIn3Litre = waterIn5Litre - 2
waterIn5Litre = waterIn5Litre - waterIn3Litre
waterIn3Litre = 0
waterIn3Litre = waterIn5Litre
waterIn5Litre = 5
waterIn3Litre = waterIn3Litre + (3 - waterIn3Litre)
waterIn5Litre = waterIn5Litre - 1
Print waterIn5Litre





