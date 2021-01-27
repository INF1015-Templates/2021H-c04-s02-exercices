///
/// Traite les arguments de ligne de commande à l'aide de TCLAP.
///


#include <cstddef>
#include <cstdint>

#include <string>

#include <tclap/CmdLine.h>

#include "Arguments.hpp"

using namespace std;
using namespace std::literals;


Arguments parseArgs(int argc, char* argv[]) {
	TCLAP::CmdLine parser("What is it, citizen?");

	// Exo 2 : Arguments du programme
	// TODO: Créer l'argument de nombre (--number)
	TCLAP::ValueArg<int> numberArg; //...
	parser.add(numberArg);
	
	// TODO: Créer l'argument de fichier (-f et --filename)
	TCLAP::ValueArg<string> filenameArg; //...
	parser.add(filenameArg);

	parser.parse(argc, argv);

	return {numberArg.getValue(), filenameArg.getValue()};
}

