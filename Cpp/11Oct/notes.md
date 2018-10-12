# Heap Sort

To find the left child : `2i+1`
to find the right child : `2i+2`

**Algorithm to find sort an array**

1. Enter `n` elements into the array : from `0 to n-1`.
2. Start a `for` loop from `i=n/2-1` to `0` inside a function `heapify(arr,n,i)`.
3. `max = i`
    - Find the left child(`lc`)
    - Find the right child(`rc`)
4. ```
    // Compare arr[max] < arr[lc] && lc < n
            max=lc;
    ```
5. ```
    // Compare arr[max] < arr[rc] && rc < n
            max = rc;
    ```
6. ```
    if(max!=i){
        //Swap arr[max],arr[i]
        heapify(arr,n,i);
    }
    ```
7. ```
    For i=n-1 to 0
    {
       Swap(arr[0],arr[i])
       heapify(arr,i)
    }
   ```