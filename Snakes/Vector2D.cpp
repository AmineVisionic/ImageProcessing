#include <cmath>

#include "Vector2D.h"

// �R���X�g���N�^
Vector2D::Vector2D()
	: x(0.0), y(0.0)
{
}

// �R���X�g���N�^
Vector2D::Vector2D(double _x, double _y)
	: x(_x), y(_y)
{
}

// �R�s�[�R���X�g���N�^
Vector2D::Vector2D(const Vector2D& v2)
	: x(v2.x), y(v2.y)
{
}

// �f�X�g���N�^
Vector2D::~Vector2D()
{
}

// ���Z�q =
Vector2D& Vector2D::operator=(const Vector2D& v2) {
	this->x = v2.x;
	this->y = v2.y;
	return (*this);
}

// ���Z�q +=
Vector2D& Vector2D::operator+=(Vector2D v2) {
	this->x += v2.x;
	this->y += v2.y;
	return *this;
}

// ���Z�q -=
Vector2D& Vector2D::operator-=(Vector2D v2) {
	this->x -= v2.x;
	this->y -= v2.y;
	return *this;
}

// ���Z�q +
Vector2D Vector2D::operator+(Vector2D v2) {
	return Vector2D(this->x + v2.x, this->y + v2.y);
}

// ���Z�q +
Vector2D Vector2D::operator-(Vector2D v2) {
	return Vector2D(this->x - v2.x, this->y - v2.y);
}

// ���Z�q *
Vector2D Vector2D::operator*(double s) {
	return Vector2D(this->x*s, this->y*s);
}

// ���Z�q /
Vector2D Vector2D::operator/(double s) {
	return Vector2D(this->x/s, this->y/s);
}

// �m����
double Vector2D::norm() const {
	return hypot(x, y);
}

// �m�����̓��
double Vector2D::norm2() const {
	return x * x + y * y;
}

// �W���o��
ostream& operator<<(ostream& os, const Vector2D& v) {
	ostringstream oss;
	oss << "[ " << v.x << ", " << v.y << " ]";
	return oss;
}