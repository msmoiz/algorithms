// Write a Point2D client that takes an integer value n from the command line,
// generates n random points in the unit square, and computes the distance
// separating the closest pair of points.

//#include <cstdlib>
//#include <iostream>
//#include <vector>
//
//int main(int argc, char* argv[])
//{
//	if (argc < 2)
//	{
//		return -1;
//	}
//	
//	int n = atoi(argv[1]);
//
//	std::vector<Point2D> points;
//	for (int i = 0; i < n; ++n)
//	{
//		points.push_back(Point2D.random());
//	}
//
//	int min_distance = INT_MAX;
//
//	for (const Point2D& a : points)
//	{
//		for (const Point2D& b : points)
//		{
//			if (a == b)
//			{
//				continue;
//			}
//
//			if (a.dist(b) < min_distance)
//			{
//				min_distance = a.dist(b);
//			}
//		}
//	}
//
//	std::cout << min_distance << std::endl;
//}
