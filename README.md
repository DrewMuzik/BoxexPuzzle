# BoxexPuzzle
HackerRank printing loops - 2

create a 2-d array given size n

for example if n = 3

soln = 3 3 3 3 3 
       3 2 2 2 3
       3 2 1 2 3 
       3 2 2 2 3
       3 3 3 3 3 
       
Approach taken = fill up the array in "boxes"
- fill outer rows / cols until center reached

1st iteration  -  3 3 3 3 3 
                  3 - - - 3
                  3 - - - 3
                  3 - - - 3
                  3 3 3 3 3 
                  
 2nd iteration -  3 3 3 3 3 
                  3 2 2 2 3
                  3 2 - 2 3
                  3 2 2 2 3
                  3 3 3 3 3 

fill center    -  3 3 3 3 3 
                  3 2 2 2 3
                  3 2 1 2 3
                  3 2 2 2 3
                  3 3 3 3 3 

