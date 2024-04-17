
# Memory Allocation

> malloc(), calloc(), realloc(), free()

To observe the variance in memory allocation behavior between malloc() and calloc(), we can conduct a controlled experiment. Firstly, we allocate memory using both functions. Subsequently, we introduce distinct values into each allocated memory block. Lastly, we examine and compare the contents of the memory blocks. Through this method, we can discern any disparities in the initial state of the allocated memory.

<br>

A program has been devised to evaluate and contrast memory allocation strategies. Initially, memory is allocated using the calloc() function. A sequence of integers representing phone numbers is then prompted and stored in the allocated memory. Should the storage capacity be exceeded, memory reallocation is triggered to accommodate additional entries. Upon completion, the stored phone numbers are displayed. Finally, the allocated memory is freed to avoid memory leaks.
