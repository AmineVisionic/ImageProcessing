#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

#include <iostream>
#include <sstream>
using namespace std;

class Vector2D {

public:
	double x, y;

	// �R���X�g���N�^
	Vector2D();
	Vector2D(double x, double y);
	Vector2D(const Vector2D& v2);

	// �f�X�g���N�^
	virtual ~Vector2D();

	// ���Z�q��`
	Vector2D& operator =(const Vector2D& v2);
	Vector2D& operator +=(Vector2D v2);
	Vector2D& operator -=(Vector2D v2);
	Vector2D operator +(Vector2D v2);
	Vector2D operator -(Vector2D v2);
	Vector2D operator *(double s);
	Vector2D operator /(double s);

	// ���̑��̏���
	double norm() const;
	double norm2() const;

	// �W���o��
	friend ostream& operator<<(ostream& os, const Vector2D& v);
};

ostream& operator<<(ostream& os, const Vector2D& v);

#endif