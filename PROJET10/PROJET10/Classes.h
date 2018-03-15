#pragma once
#include "define.h"


//-------------------------------------------------------------------------------------
// Classe Vecteur3D -  déclare un objet qui reflète une position au sein d'un espace  -
// euclidien dans le temps. Utilisé pour déplacer Jazz au sein d'une série de cases   -
// par vérification des cases aux alentours											  -
//-------------------------------------------------------------------------------------
class CVecteur3D
{
public:
	//C'tor & d'tor
	CVecteur3D(float fC1 = ORIGINE, float fC2 = ORIGINE, float fC3 = ORIGINE);			//Constructeur pour une position à l'origine
	virtual ~CVecteur3D();
private:
	//Données membres
	float m_fX, m_fY, m_fZ;
};

//--------------------------------------------------------------------------------------
// Classe CJazzInSpace - déclare un objet possédant une position dans le temps grâce à -
// à un objet de classe Vecteur3D (agrégation). L'objet possède également des          -
// caractéristiques (mood, réserve de croquettes) pouvant être altérées par des        -
// objets d'équipement de classe CPieceEquipement                                      -
//--------------------------------------------------------------------------------------
class CJazzInSpace
{
public:
	//C'tor & d'tor
	CJazzInSpace(int dReserveCroquettes = MAX_CAR, int dMood = MAX_CAR);
	virtual ~CJazzInSpace();
private:
	//Données membres
	int m_dReserveCroquettes, m_dMood;
	CVecteur3D  CVecteur3D;																//Position de l'objet
	CPieceEquipement *oEquipement1;														//Pièce d'équipement apportant une modification de Mood ou de Réserve de croquettes
	CPieceEquipement *OEquipement2;
};

//-------------------------------------------------------------------------------------
// Classe CDonjon - déclare un objet possédant des caractéristiques nom et type mais  -
// également un tableau d'objet de classe CCase                                       -
//-------------------------------------------------------------------------------------
class CDonjon
{
public:
	//C'tor & d'tor

private:
	//Données membres
	char m_cNom;
	int m_dType;
	CCase *oItinéraire;
};

class CCase
{
public:
	//C'tor & d'tor
private:
	//Données membres
};

class CCaseDépart
{
public:
	//C'tor & d'tor
private:
	//Données membres
};

class CCaseAmbiance
{
public:
	//C'tor & d'tor
private:
	//Données membres
};

class CCaseEvent
{
public:
	//C'tor & d'tor
private:
	//Données membres
};

class CCaseBoss
{
public:
	//C'tor & d'tor
private:
	//Données membres
};

//
//
//
class CPieceEquipement
{
public:
	//C'tor & d'tor
private:
	//Données membres
	int m_dModifMood, m_dModifRéserveCroquettes;
	char m_cNom;
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