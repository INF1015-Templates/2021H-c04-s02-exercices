# Premiers pas à l'aide d'exercices (semaine 1)

## Environnement de développement

Tout d'abord, il faut avoir un environnement de développement pour développer (duh). Sur Windows, nous recommandons d'utiliser Visual Studio 2019, dont la procédure d'installation est donnée sur Moodle. Un guide d'utilisation adapté pour le cours est aussi donné.

Pour gérer l'installation des bibliothèques tierces (comme *cppitertools*), on recommande fortement d'utiliser Vcpkg. Avec Visual Studio, l'intégration est très transparente et vous n'avez généralement qu'à suivre les étapes dans la documentation officielle. Avec VSCode et CMake sur Linux ou MacOS (ou même sur Windows, peu importe), l'utilisation est un peu moins *automagique*. Sur Moodle, vous trouverez un guide d'utilisation de Vcpkg et de VSCode avec CMake ([Lien sur Github](https://github.com/INF1015-Templates/2021H-base/blob/main/doc/Vcpkg.md))

## 1. Bonjour, le monde

Tout simplement, affichez `Hello, world!` à l'écran.

## 2. Arguments du programme

On peut passer des arguments à notre programme en C++. Ils sont disponibles à travers les arguments `int arg, char* argv[]` du `main()` (donc `int main(int argc, char* argv[])`). En Python, on les traitait à l'aide du module standard *argparse*, mais l'équivalent n'existe pas dans la librairie standard C++. On va donc utiliser la bibliothèque *TCLAP* (*Templatized C++ Command Line Parser*), qu'on installe en faisant `vcpkg install tclap`.

On a mis le traitement des options dans la fonction `parseArgs()`, qui se trouve déclarée dans *Arguments.hpp* et définie dans *Arguments.cpp*. Les options sont mises dans une structure `Arguments` pour en faciliter l'utilisation.

## 3. Multiples de 3

Affichez à l'écran les multiples de 3 strictement positifs et plus petits que le nombre passé en argument au programme. On peut utiliser deux formes de boucles : la forme classique avec initialisation, condition et actualisation, ou à l'aide de `iter::range()` qui nous donne la même forme que Python. Pour installer *cppitertools*, on fait `vcpkg install cppitertools`.

## 4. Facture

Formatez une facture à partir du nom d'un client et de la liste de ses achats. Ceux-ci se trouve dans le fichier dont le chemin est passé en paramètre au programme. Ce fichier contient le nom du client sur une ligne, puis sur chaque autre ligne le nom de l'article, sa quantité et son prix unitaire. La facture doit afficher le nom du client, le sous-total, le montant des taxes et le total avec taxes en supposant un taux de 15% de taxes. Les montants dans la facture doivent être écrits sous le nom du client, être alignés à droite sur 10 colonnes et avoir deux chiffres décimaux suivi d’un signe de dollar. Il faut suivre le format de l’exemple.

Si on a comme fichier :
```
Aipik Gahmeur
chaise       1 399.99
g-fuel      69  35.99
season-pass  1  39.99

```
La sortie devrait être :
```
Aipik Gahmeur
SUB TOTAL    2923.29 $
TAXES         438.49 $
TOTAL        3361.78 $
```