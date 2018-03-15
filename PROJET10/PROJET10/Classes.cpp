#include "stdafx.h"
#include "Classes.h"
#include "iostream"

using namespace std;

//--------------
// Vecteurs 3D -
//--------------
//C'tor
CVecteur3D::CVecteur3D(float fC1, float fC2, float fC3)
{
	this->m_fX = fC1;
	this->m_fY = fC2;
	this->m_fZ = fC3;
}
//D'tor
CVecteur3D::~CVecteur3D()
{
	cout << "Destruction violente d'un objet CVecteur3D" << endl;
}

//--------------
// JazzInSpace -
//--------------
CJazzInSpace::CJazzInSpace(int dReserveCroquettes, int dMood)
{

}
CJazzInSpace::~CJazzInSpace()
{
	cout << "Homeward Bound: The End of the Incredible Journey" << endl;
}

//---------
// CObjet -
//---------




















































//--------------
// Vecteurs 4D -
//--------------
CVecteur4D::CVecteur4D(float fC1, float fC2, float fC3, float fC4)
{
	this->m_fX = fC1;
	this->m_fY = fC2;
	this->m_fZ = fC3;
	this->m_fT = fC4;
}
CVecteur4D::~CVecteur4D()
{
	cout << "Destruction sanglante d'un objet CVecteur3D" << endl;
}
CVecteur4D& CVecteur4D::operator= (const CVecteur4D& oVect)
{
	cout << "Clonage de vecteur" << endl;

	this->m_fX = oVect.m_fX;
	this->m_fY = oVect.m_fY;
	this->m_fZ = oVect.m_fZ;
	this->m_fT = oVect.m_fT;

	return *this;
}
CVecteur4D& CVecteur4D::operator- (const CVecteur4D& oVect)
{
	cout << "Addition de vecteurs" << endl;

	this->m_fX = this->m_fX - oVect.m_fX;
	this->m_fY = this->m_fY - oVect.m_fY;
	this->m_fZ = this->m_fZ - oVect.m_fZ;
	this->m_fT = this->m_fT - oVect.m_fT;

	return *this;
}
CVecteur4D& CVecteur4D::operator+ (const CVecteur4D& oVect)
{
	cout << "Addition de vecteurs" << endl;

	this->m_fX = this->m_fX + oVect.m_fX;
	this->m_fY = this->m_fY + oVect.m_fY;
	this->m_fZ = this->m_fZ + oVect.m_fZ;
	this->m_fT = this->m_fT + oVect.m_fT;

	return *this;
}
bool CVecteur4D::operator== (const CVecteur4D& oVect)
{
	if (
		(this->m_fX == oVect.m_fX) &&
		(this->m_fY == oVect.m_fY) &&
		(this->m_fZ == oVect.m_fZ) &&
		(this->m_fT == oVect.m_fT)
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool CVecteur4D::operator!= (const CVecteur4D& oVect)
{
	if (
		(this->m_fX != oVect.m_fX) &&
		(this->m_fY != oVect.m_fY) &&
		(this->m_fZ != oVect.m_fZ) &&
		(this->m_fT != oVect.m_fT)
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}