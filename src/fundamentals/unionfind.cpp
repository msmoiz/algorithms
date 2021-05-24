// The input is a sequence of pairs of integers (p, q)
// which indicates that "p is connected to q".
// If previous inputs imply that p is connected to q
// already, then we don't print the pair.
// The goal is to remove all extraneous pairs
// and determine if two points are connected.

#include <iostream>

/**
 * Class responsible for determining the number
 * of connected components.
 */
class UnionFind
{
	int site_count_; // site count
	int* sites_; // entry points to index of another site in same component
	int* sz_; // size of component for roots (site indexed)
	int component_count_; // number of components
	
public:
	
	UnionFind(const int n)
	{
		site_count_ = n;
		component_count_ = n; // each site in its own component
		sites_ = new int[n];
		sz_ = new int[n];
		for (int i = 0; i < n; ++i)
		{
			sites_[i] = i;
			sz_[i] = 1;
		}
	}

	~UnionFind()
	{
		delete[] sites_;
		delete[] sz_;
	}

	/** Find the connection component that p resides in. */
	int find(int p) const
	{
		// --Quick-find
		// Component find is quick, involving a single array access
		// However, the resulting union operation must iterate over
		// every single site for each pair.
		// Has quadratic growth.
		//return sites_[p];
		// --Quick-union
		// Component find is slower, possibly linear in worst-case
		// resulting in quadratic growth in worst-case for union
		// (which needs two find() operations).
		// --Weighted-quick-union
		// Ties smallest tree to largest tree,
		// ensuring lowest average tree height,
		// and in turn lowest average find times.
		// --Weighted-quick-union-with-path-compression (not implemented)
		// If we wanted to optimize to the maximum degree,
		// we could compress paths so that each encountered node
		// points at its root directly - resulting in tree height 1
		// and minimum lookup time.

		while (p != sites_[p])
		{
			p = sites_[p];
		}

		return p;
	}

	/**
	 * Indicate connection of p and q by combining their
	 * respective components.
	 */
	void unify(const int p, const int q)
	{
		const int i = find(p);
		const int j = find(q);
		
		if (i == j)
		{
			return;
		}

		//sites_[p_root] = q_root; // point one component to another (quick-union)
		// weighted quick-union (results in much shallower trees, so every find operation is much faster)
		if (sz_[i] < sz_[j])
		{
			sites_[i] = j; sz_[j] += sz_[i];
		}

		else
		{
			sites_[j] = i; sz_[i] += sz_[j];
		}

		//for (int i = 0; i < site_count_; ++i)
		//{
		//	if (sites_[i] == p_component)
		//	{
		//		sites_[i] = q_component;
		//	}
		//}

		--component_count_;
	}

	/** Returns true if p and q are in the same connection component. */
	bool connected(const int p, const int q) const { return find(p) == find(q); }

	/** Returns number of connection components. */
	int count() const {return component_count_; }
};

int main()
{
	int n; // read number of sites
	std::cin >> n;
	UnionFind union_find(n);

	while (!std::cin.eof())
	{
		int p, q;
		std::cin >> p;
		std::cin >> q;

		if (union_find.connected(p, q)) { continue; }

		union_find.unify(p, q);
		//std::cout
		//	<< "("
		//	<< p
		//	<< ", "
		//	<< q
		//	<< ")"
		//	<< std::endl;
	}

	std::cout << union_find.count() << " components" << std::endl;
}
