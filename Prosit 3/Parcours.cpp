#include <string>
#include "Parcours.h"
#include "Points.h"
using namespace std;

Parcours2D::Parcours2D() {}
Parcours2D::~Parcours2D() {}

Parcours3D::Parcours3D() {}
Parcours3D::~Parcours3D() {}

void Parcours2D::add(Point2D point)
{
	m_points.push_back(point);
}

void Parcours3D::add(Point3D point)
{
	m_points.push_back(point);
}

double Parcours2D::distance()
{
	double distance(0);
	for (int i(1); i < this->m_points.size(); ++i) {

		double x(0);
		double y(0);

		x = pow((double)m_points[i - 1].getX() - (double)m_points[i].getX(), 2);
		y = pow((double)m_points[i - 1].getY() - (double)m_points[i].getY(), 2);

		distance += sqrt(x + y);

	}
	return distance;
}

double Parcours3D::distance()
{
	double distance(0);
	for (int i(1); i < this->m_points.size(); ++i) {

		double x(0);
		double y(0);
		double z(0);

		x = pow((double)m_points[i - 1].getX() - (double)m_points[i].getX(), 2);
		y = pow((double)m_points[i - 1].getY() - (double)m_points[i].getY(), 2);
		z = pow((double)m_points[i - 1].getZ() - (double)m_points[i].getZ(), 2);

		distance += sqrt(x + y + z);

	}
	return distance;
}