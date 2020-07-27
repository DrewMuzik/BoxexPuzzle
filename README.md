# BoxexPuzzle
## HackerRank printing loops - 2
</br>
create a 2-d array given size n
</br>
###  Example if n = 3
</br>

soln = 3 3 3 3 3 
       3 2 2 2 3
       3 2 1 2 3 
       3 2 2 2 3
       3 3 3 3 3 
 </br>

### Approach taken = fill up the array in "boxes"
</br>
- fill outer rows / cols until center reached

</br>

<pre>
1st iteration = 3 3 3 3 3 
                3 - - - 3
                3 - - - 3 
                3 - - - 3
                3 3 3 3 3 

2nd iteration = 3 3 3 3 3 
                3 2 2 2 3
                3 2 - 2 3 
                3 2 2 2 3
                3 3 3 3 3 
       
fill center =   3 3 3 3 3 
                3 2 2 2 3
                3 2 1 2 3 
                3 2 2 2 3
                3 3 3 3 3 
</pre>
