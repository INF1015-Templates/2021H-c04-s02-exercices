///
/// Ce projet utilise quelques librairies disponibles sur Vcpkg et permet entre autre d'en tester le bon fonctionnement.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#include <tclap/CmdLine.h>
#include <cppitertools/range.hpp>

#include "Arguments.hpp"

using namespace std;
using namespace std::literals;


// TODO: Déclarer une constante pour le facteur des multiples à calculer.
// TODO: Déclarer une constante pour le taux de taxation.


int main(int argc, char* argv[]) {
	// Exo 2 : Arguments du programme
	// TODO: Traiter les arguments de ligne de commande.

	// Exo 1 : Bonjour, le monde
	// TODO: Faire un hello world.

	// Exo 3 : Multiples de 3
	// TODO: Afficher les multiples de 3 plus petits que `number` (passé en paramètre).

	// Exo 4 : Facture
	// TODO: Ouvrir le fichier et vérifier l'ouverture.
	// TODO: Lire le nom du client.
	// TODO: Pour chaque ligne suivante:
		// TODO: Lire le nom de l'item, sa quantité et son prix unitaire.
		// TODO: Ajouter au sous-total.
	// TODO: Calculer les taxes et le total avec taxes.
	// TODO: Afficher le nom du client, son sous-total, taxes et total (alignés sur 10 colonnes, deux décimales).
}

