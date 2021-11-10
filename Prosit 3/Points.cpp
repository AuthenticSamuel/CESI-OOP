#include <string>
#include "Parcours.h"
#include "Points.h"
using namespace std;

Point2D::Point2D() : m_x(0), m_y(0) {}
Point2D::Point2D(int x, int y) : m_x(x), m_y(y) {}
Point2D::~Point2D() {}

Point3D::Point3D() : m_x(0), m_y(0), m_z(0) {}
Point3D::Point3D(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {}
Point3D::~Point3D() {}

int Point2D::getX() { return this->m_x; }
int Point2D::getY() { return this->m_y; }
string Point2D::toString() { return "(" + to_string(this->m_x) + ", " + to_string(this->m_y) + ")"; }

int Point3D::getX() { return this->m_x; }
int Point3D::getY() { return this->m_y; }
int Point3D::getZ() { return this->m_z; }
string Point3D::toString() { return "(" + to_string(this->m_x) + ", " + to_string(this->m_y) + ", " + to_string(this->m_z) + ")"; }