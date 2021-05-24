// What is wrong with the following code fragment?
// int[] a;
// for (int i = 0; i < 10; i++)
// {
//	 a[i] = i * i;
// }
//
// Solution: The array is never allocated,
// will result in an indexing error.