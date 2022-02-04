#pragma once
#include <vector>



template <typename t>
class Mat{
	const std::vector<int> dims;
	std::vector<t> values;
	


public:
	Mat(const std::vector<int> dimensions) : dims(std::move(dimensions)) {
		int val = 1;
		for(const auto& dim: dims)
			val *= dim;
		values = std::vector<t>(val);
	}
};
