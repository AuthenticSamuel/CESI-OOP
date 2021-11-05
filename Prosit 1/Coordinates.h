#ifndef DEF_COORDINATES
#define DEF_COORDINATES

#include <vector>

class Coordinates {

public:
	void pointAdd(int x, int y);
	void pointAddCin();
	void pointDelete(int index);
	void list() const;
	void distance();
	void verifyHypothesis(float hypothesis, int firstElement);
	void listReset();

private:
	std::vector<int> m_xlist;
	std::vector<int> m_ylist;
	float getDistance(int index);

};

#endif
