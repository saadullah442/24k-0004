# Description

Input price of all items, cash available with user and wight of all items
Multiply price of each item with its corrosponding weight and them add them all to get totalprice
subtract totalprice from cash to calculate change
output totalprice and change


# Pseudocode

Declare Cash, TotalPrice, Price1, Price2, Price3, Change, Weight1, Weight2, Weight3 As Float
Input Price1, Price2, Price3, Cash, Weight1, Weight2, Weight3
TotalPrice = (Price1 * Weight1) + (Price2 * Weight2) + (Price3 * Weight3)
Change = Cash - TotalPrice
Print "Item cost" TotalPrice
Print "Your change" Change
