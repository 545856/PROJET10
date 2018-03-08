#pragma once
#define MAX 100


class CVecteur3D
{
public:
	CVecteur3D(float fC1 = 0.0, float fC2 = 0.0, float fC3 = 0.0);
	virtual ~CVecteur3D();
private:
	float m_fX, m_fY, m_fZ;
};

class CVecteur4D
{
public:
	//C'or & d'tor
	CVecteur4D(float fC1 = 0.0, float fC2 = 0.0, float fC3 = 0.0, float fC4 = 0.0);
	CVecteur4D(const CVecteur4D& oVectCopie);
	virtual ~CVecteur4D();
	//Prédicats
	void DisplayVector();
	//Actions

	//Surcharge des opérateurs
	CVecteur4D& operator= (const CVecteur4D& oVect);
	CVecteur4D& operator+ (const CVecteur4D& oVect);
	CVecteur4D& operator- (const CVecteur4D& oVect);
	bool operator== (const CVecteur4D& oVect);
	bool operator!= (const CVecteur4D& oVect);
private:
	float m_fX, m_fY, m_fZ, m_fT;

};

class CJazzInSpace
{
public:
	CJazzInSpace(int dReserveCroquettes = MAX, int dEnergie = MAX, int dMood = MAX);
	virtual ~CJazzInSpace();
private:
	int dReserveCroquettes;
	int dEnergie;
	int dMood;
};

//diférence = déplacement
//addition = 
//avec deux objets représentant des position, on peut définir une distance parcourue. 
//bool if (fonctiontrue) else