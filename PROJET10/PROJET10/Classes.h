#pragma once
#include "define.h"


//-------------------------------------------------------------------------------------
// Classe Vecteur3D -  d�clare un objet qui refl�te une position au sein d'un espace  -
// euclidien dans le temps. Utilis� pour d�placer Jazz au sein d'une s�rie de cases   -
// par v�rification des cases aux alentours											  -
//-------------------------------------------------------------------------------------
class CVecteur3D
{
public:
	//C'tor & d'tor
	CVecteur3D(float fC1 = ORIGINE, float fC2 = ORIGINE, float fC3 = ORIGINE);			//Constructeur pour une position � l'origine
	virtual ~CVecteur3D();
private:
	//Donn�es membres
	float m_fX, m_fY, m_fZ;
};

//--------------------------------------------------------------------------------------
// Classe CJazzInSpace - d�clare un objet poss�dant une position dans le temps gr�ce � -
// � un objet de classe Vecteur3D (agr�gation). L'objet poss�de �galement des          -
// caract�ristiques (mood, r�serve de croquettes) pouvant �tre alt�r�es par des        -
// objets d'�quipement de classe CPieceEquipement                                      -
//--------------------------------------------------------------------------------------
class CJazzInSpace
{
public:
	//C'tor & d'tor
	CJazzInSpace(int dReserveCroquettes = MAX_CAR, int dMood = MAX_CAR);
	virtual ~CJazzInSpace();
private:
	//Donn�es membres
	int m_dReserveCroquettes, m_dMood;
	CVecteur3D  CVecteur3D;																//Position de l'objet
	CPieceEquipement *oEquipement1;														//Pi�ce d'�quipement apportant une modification de Mood ou de R�serve de croquettes
	CPieceEquipement *OEquipement2;
};

//-------------------------------------------------------------------------------------
// Classe CDonjon - d�clare un objet poss�dant des caract�ristiques nom et type mais  -
// �galement un tableau d'objet de classe CCase                                       -
//-------------------------------------------------------------------------------------
class CDonjon
{
public:
	//C'tor & d'tor

private:
	//Donn�es membres
	char m_cNom;
	int m_dType;
	CCase *oItin�raire;
};

class CCase
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
};

class CCaseD�part
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
};

class CCaseAmbiance
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
};

class CCaseEvent
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
};

class CCaseBoss
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
};

//
//
//
class CPieceEquipement
{
public:
	//C'tor & d'tor
private:
	//Donn�es membres
	int m_dModifMood, m_dModifR�serveCroquettes;
	char m_cNom;
};




































































class CVecteur4D
{
public:
	//C'or & d'tor
	CVecteur4D(float fC1 = 0.0, float fC2 = 0.0, float fC3 = 0.0, float fC4 = 0.0);
	CVecteur4D(const CVecteur4D& oVectCopie);
	virtual ~CVecteur4D();
	//Pr�dicats
	void DisplayVector();
	//Actions

	//Surcharge des op�rateurs
	CVecteur4D& operator= (const CVecteur4D& oVect);
	CVecteur4D& operator+ (const CVecteur4D& oVect);
	CVecteur4D& operator- (const CVecteur4D& oVect);
	bool operator== (const CVecteur4D& oVect);
	bool operator!= (const CVecteur4D& oVect);
private:
	float m_fX, m_fY, m_fZ, m_fT;

};