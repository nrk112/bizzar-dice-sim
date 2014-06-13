bizzar-dice-sim
===============

HW2 for Foundations of CS at FAU.

DIRECTIONS
===============
Write a program that simulates a game where a player throws 5 dice and can 
reroll all of the dice (all or none) if the player wants. A player can only reroll all 
the dice once but does not have to do the reroll. After the original roll and after 
possibly rerolling all the dice the sum of all the dice is the players score. The dice 
are a little unusual. The first one only has 4 sides, the second has 5 sides, the third 
has 6 sides, the fourth has seven sides and the fifth has eight sides. The sides of the first die are 
numbered from 1 to 4. The sides of the second die are numbered from 1 to 5, etc. 

1)  Your program will be submitted on time or you will not receive credit for this assignment. 

2)  Your program will be submitted using the directionsfor HW submission supplied on the class 
web site. (Any errors in this will result in a lower grade and possibly no credit for this 
assignment.) 

3)  Your program should be object oriented and have a .h file and a .cpp file for each object. 

4)  Your program will have a main.cpp file for the mainfunction. 

5)  There should be a Dice class and a SetOfDice class.

6)  Your program should run each simulation 20000 times. (There will be three separate simulation 
runs.) 

7)  After the first simulation it will neatly display on the screen the estimate of the expected 
average score for a player who plays an optimal strategy. (Can you figure out the optimal 
strategy? We will discuss it briefly in class.) 

8)  After the second simulation it will neatly display on the screen the estimate of the expected 
average score for a player who never chooses to reroll all the dice. 

9)  After the third simulation it neatly display on thescreen the estimate of the percentage of time 
that the player from item 7 is expected to beat theplayer from item 8. 

10)  The program will then ask you if you want to rerun the simulation if you answer with “Y” or “y” 
the program will repeat steps 7, 8, 9 and 10. Otherwise the program will end. 

11)  In keeping with my theory of Top Down Design no function or method will have more than two 
nested control structures. 

12)  The program will use the extended TomRandom class which now has a method called getInt. 

13)  You must make a text file called dicetest.txtwhich will list all the numbered criteria that your 
program does not meet perfectly. For example if your program does ask you if you want to 
repeat the simulation then you must include the following line in the dicetest.txt file: 
“Criteria 10 is not met.” 
 Any error in the reporting of missed criteria in the dicetest.txtwill reduce your grade.   
More criteria may be added in class.