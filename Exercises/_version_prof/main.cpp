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
const int factor = 3;
// TODO: Déclarer une constante pour le taux de taxation.
const double taxRate = 0.15;


int main(int argc, char* argv[]) {
	// Exo 2 : Arguments du programme
	// TODO: Traiter les arguments de ligne de commande.
	Arguments args = parseArgs(argc, argv);

	// Exo 1 : Bonjour, le monde
	// TODO: Faire un hello world.
	cout << "Hello, world!" << "\n\n";

	//Exo 3 : Multiples de 3
	//TODO: Afficher les multiples de 3 plus petits que `number` (passé en paramètre).
	 for (int i : iter::range(factor, args.number, factor))
		cout << i << " ";
	cout << "\n\n";

	//Exo 4 : Facture
	//TODO: Ouvrir le fichier et vérifier l'ouverture.
	ifstream file(args.filename);
	file.exceptions(ios::failbit);
	//TODO: Lire le nom du client.
	string clientName;
	getline(file, clientName);
	//TODO: Pour chaque ligne suivante (jusqu'à la fin du fichier):
	double subTotal = 0.0;
	while (not ws(file).eof()) {
		// TODO: Lire le nom de l'item, sa quantité et son prix unitaire.
		struct Item {
			string name;
			int quantity;
			double cost;
		};
		Item item;
		file >> item.name >> item.quantity >> item.cost;
		// TODO: Ajouter au sous-total.
		subTotal += item.quantity * item.cost;
	}
	//TODO: Calculer les taxes et le total avec taxes.
	double taxes = subTotal * taxRate;
	double total = subTotal + taxes;
	//TODO: Afficher le nom du client, son sous-total, taxes et total (alignés sur 10 colonnes, deux décimales).
	cout << clientName << "\n";
	printf("SUB TOTAL %10.2f $" "\n", subTotal);
	printf("TAXES     %10.2f $" "\n", taxes);
	printf("TOTAL     %10.2f $" "\n", total);
	cout << clientName << "\n";
	     << "SUB TOTAL " << setw(10) << fixed << setprecision(2) << subTotal << " $" << "\n";
	     << "TAXES     " << taxes << "\n"
	     << "TOTAL     " << total << "\n";
}

