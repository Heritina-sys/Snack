# Snack — jeu Snake en C avec SDL2

Petit jeu de type **Snake** écrit en C avec **SDL2**. Le dossier contient aussi
un test d'environnement et quelques exécutables déjà compilés.

## Fichiers

| Élément | Rôle |
|---|---|
| `icone.c` | Jeu principal (SDL2) |
| `teste.c` | Petit test : construction d'une commande `export` via `system()` |
| `prog`, `prg.exe`, `a.out`, `icone.exe` | Binaires compilés |
| `SDL2_ttf.dll` | DLL SDL2_ttf (Windows) |
| `quiz/` | Assets du jeu (images BMP, fichiers texte, exécutables) |
| `snack/` | Police `Black Mortal TTF Personal.ttf` |

## Assets attendus par `icone.c`

Le code charge des images avec des chemins Windows :

```
quiz\image.bmp
quiz\s.bmp, quiz\n.bmp, quiz\a.bmp, quiz\c.bmp, quiz\k.bmp
snack\game_over.bmp
```

Le dossier `quiz/` fourni contient notamment `titina.bmp` et des fichiers texte :
vérifier que les noms/chemins correspondent avant de lancer le jeu (ou adapter
les `SDL_LoadBMP`).

## Prérequis

- Un compilateur C (`gcc`)
- SDL2 (et éventuellement SDL2_ttf)

## Compilation

Les commandes utilisées sont rappelées en commentaire dans `icone.c` :

```bash
# Windows / MinGW
gcc icone.c -o icone -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf

# Linux / macOS
gcc icone.c $(sdl2-config --cflags --libs) -o prog
```

## Exécution

Lancer le binaire depuis la racine du projet pour que les chemins relatifs
`quiz\...` et `snack\...` soient résolus.

## Notes

- Les binaires et la DLL sont versionnés tels quels.
- Le jeu est un prototype pédagogique ; les chemins d'assets sont spécifiques à
  Windows.
