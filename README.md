# 🔐 Password Generator

Un programme simple développé en C++ par **EwanFRANCOIS** permettant de générer des mots de passe sécurisés et personnalisés selon les préférences de l'utilisateur.

---

## 🚀 Comment ça marche ?

Le programme fonctionne de la manière suivante :

1. **Affichage du menu interactif** : Au démarrage, le programme charge et lit un fichier externe nommé `menu.txt` pour présenter les options à l'utilisateur. *(Le fichier `menu.txt` doit impérativement se trouver dans le même dossier que l'exécutable).*
2. **Sélection du mode** : L'utilisateur choisit parmi plusieurs types de génération :
   - **Option 1** : Mot de passe composé uniquement de lettres (minuscules).
   - **Option 2** : Mot de passe combinant des lettres et des chiffres.
   - **Option 3** : Mot de passe combinant des lettres et des caractères spéciaux.
   - **Option 4** : Quitter le programme.
3. **Définition de la longueur** : Le programme demande à l'utilisateur d'indiquer la taille souhaitée pour son mot de passe.
4. **Génération aléatoire** : Grâce à l'initialisation `srand(time(0))`, le programme pioche aléatoirement des caractères dans des vecteurs prédéfinis pour composer et afficher le mot de passe final.

---

## ⚙️ Prérequis et Compilation

Pour compiler et lancer le projet par vous-même, assurez-vous d'avoir un compilateur C++ installé sur votre machine (comme `g++`, Clang ou MinGW).

### 1. Fichiers nécessaires dans le dossier :
* `pwdGen.cpp` (le code source)
* `menu.txt` (le fichier texte du menu)

### 2. Compiler le projet
Ouvrez votre terminal dans le dossier du projet et exécutez la commande de compilation suivante (exemple avec `g++`) :

```bash
g++ pwdGen.cpp -o pwdGen
```

### 3. Lancer le projet
toujours dans le même terminal, écrivez la commande ci-dessous pour lancer le programme :

```bash
.\pwdGen.exe
```
