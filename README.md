# Selection sort

An algorithm that works better on arrays in selection sort. We first find the smallest element of the array, and swap it with the element in first position. Then we do the second biggest element and swap it with the element in second position, etc. This algorithm is well-suited for a fixed-size data structure such as arrays, and is typically done in place.

Use a helper function min_val_index that finds the position of the minimum value in an array;

Repeatedly use min_val_index to find the position pos of the minimum value between position i and n-1;

Swap the element at that position arr[pos] with arr[i] the element at position i.
