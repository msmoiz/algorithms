// Criticize the following recursive function
// std::string exR2(int n)
// {
//	 std::string s = exR2(n-3) + n + exR2(n-2) + n;
//	 if (n <= 0)
//	 {
//		return "";
//	 }
//	 return s;
// }
//
// Critique: The base case where n <= 0 will never be reached
// as the recursion will keep running on small and smaller numbers
// towards negative infinity.
