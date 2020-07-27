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

1st iteration__-__3_3_3_3_3 
</br>_____________3_-_-_-_3
</br>_____________3_-_-_-_3
</br>_____________3_-_-_-_3
</br>_____________3_3_3_3_3 
</br>
</br>
2nd iteration__-__3_3_3_3_3 
</br>_____________3_2_2_2_3
</br>_____________3_2_-_2_3
</br>_____________3_2_2_2_3
</br>_____________3_3_3_3_3 
</br>
</br>

fill center____-__3_3_3_3_3 
</br>_____________3_2_2_2_3
</br>_____________3_2_1_2_3
</br>_____________3_2_2_2_3
</br>_____________3_3_3_3_3 
</br>
</br>

