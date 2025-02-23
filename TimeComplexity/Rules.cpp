/*
Time Complexity Rules: 

1. Time Complexity, worst case scenario.
2. avoid constants.
3. avoid lower values.

*/

// Example : 

for(int i = 0 ; i<n; i++){      
    for(int j = 0; j<=i; j++){     
        // code
    }
}

/*


Explain: 

i = 0  -> {j=0}
i = 1  -> {j=0,1}
i = 2  -> {j=0,1,2}
    .
    .
    .
i = n-1 -> {j= 0,1,2,....n-1}

so it is  0,1,2,3,4,......n

we know the natural number derivation: 
   n*(n+1)/2 

 = n^2/2 + n/2

 ~ O(n^2/2 )     // [avoid lower value]
 ~ O(n^2 )       // [avoid constant]

*/