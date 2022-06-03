#include "user.h"

user::user(database * db)
{
	_db = db;
}

user::~user()
{}

// - Set user variables with user infos
void user::setUser(QString idCard, QString mail, QString password, QString isAdmin)
{
	this->_idCard = idCard.toInt();
	this->_mail = mail;
	this->_password = password;
	this->_isAdmin = isAdmin.toInt();
}

// - get all informations of user by CardID
void user::setUserByIdCard(QString idCard)
{
	qDebug() << "\n\n//----- Verification Carte -----//\n" << endl;
	qDebug() << "Passage de le carte " + idCard << endl;
	int countUser = _db->countdb(_db->user_table, " WHERE idCard = " + idCard);
	if (countUser > 0)
	{

		QSqlQuery userQuery = _db->selectdb(_db->user_table, " WHERE idCard = " + idCard);

		userQuery.next();
		// Show user infos
		//for (int i = 0; i < 4; i++)
		//{
		//	qDebug() << "Query Result : " + userQuery.value(i).toString() << endl;
		//}

		_isAdmin = userQuery.value(3).toInt();

		if (_isAdmin == 1) {
			qDebug() << "L'utilisateur est administrateur" << endl;
			qDebug() << "Acces accorde, ouverture de la gache" << endl;
			//Ouverture de la g�che
		}
		else {
			qDebug() << "Verification de la plage horaire..." << endl;
			// V�rification de la plage horaire

			qDebug() << "Acces en plage horaire, acces accorde" << endl;
			qDebug() << "ouverture de la gache" << endl;
			// Si plage horaire respect�e alors ouverture de la g�che
		}
	}
	else {
		qDebug() << "Carte non renseignee en base de donnee\n" << endl;
	}
}

// - Get card id from specific user
void user::getIdCard(QString user)
{}

// - Get user mail value
void user::getMail(QString user)
{}

// - Get user admin value
void user::getAdmin(QString user)
{}

// - Select user from database
void user::selectUser(QString user)
{}

// - Insert user from database
void user::insertUser(QString user)
{}

// - Update user from database
void user::updateUser(QString user)
{}

// - Delete user from database
void user::deleteUser(QString user)
{}

// - Get all passage
void user::histoPassage()
{}

// - Get all passage from specific user
void user::histoPassageByUser()
{}


/* R�cup�ration heure

// date / heure actuelle bas�e sur le syst�me actuel
			time_t tmm = time(0);

			// convertir en forme de cha�ne
			char* dt = ctime(&tmm);
			qDebug() << "La date et l'heure locales sont: " << dt << endl;

*/
