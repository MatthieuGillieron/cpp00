#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"



/*

[OK]
on a besoin d'avoir un tableau de 8 contact
si > 8 ecraser le 1er


[OK]
ADD : sauvegarder un nouveau contact
Si l'utilisateur entre cette commande, il est invité à saisir les informations du nouveau contact champ par champ.
Une fois que tous les champs ont été complétés, ajoute le contact à l'annuaire
Les champs du contact sont : prénom, nom de famille, surnom, numéro de téléphone, et secret le plus sombre
Un contact sauvegardé ne peut pas avoir de champs vides


SEARCH : afficher un contact spécifique
Affiche les contacts sauvegardés sous forme de liste de 4 colonnes : index, prénom, nom de famille et surnom
Chaque colonne doit faire 10 car de large. Un care pipe ('|') les sépare. Le texte doit être aligné à droite. Si le texte est plus long que la colonne,
il doit être tronqué et le dernier caractère affichable doit être remplacé par un point ('.')
Ensuite, demande à nouveau à l'utilisateur l'index de l'entrée à afficher. Si l'index est hors limites ou incorrect,
définis un comportement pertinent. Sinon, affiche les informations du contact, un champ par ligne


[OK]
EXIT
Le programme se ferme et les contacts sont perdus à jamais !

Toute autre entrée est ignorée.
Une fois qu'une commande a été correctement exécutée, le programme attend une autre commande. Il s'arrête quand l'utilisateur saisit EXIT.
Donne un nom pertinent à ton exécutable.

*/





class Phonebook {

	private :

		Contact listContact[8];
		int		size;
		int		insert;

	public :

		void	addContact();
		void	searchContact();

		Phonebook(void);
		~Phonebook(void);

};



#endif