# 42_Printf

*Printf n'a rien de compliqué en soi, ce n'est qu'un ensemble de fonctions simples. Je peux t'assurer que mathématiquement parlant **CUB3D** te demandera beaucoup plus de réfléxion que Printf.
Le vrai défi de cette fonction c'est sa modularité. En gros sa capacité à être scalable. L'objectif étant de lui ajouter des fonctionnalités et de lui faire gérer des cas particuliers au fur et à mesure. Si tu dois revoir tout ton code à chaque fois que tu veux ajouter un flag tu n'es pas prêt d'avoir fini, et tu ne serais pas un développeur efficace.
Mais le vrai défi c'est celui engendré par ce besoin d'être modulaire, à savoir : Arriver à déterminer dans quel ordre doit-on traiter les flags / cas particuliers ? Alors à des fins de compréhension pour mon futur moi et potentiellement d'autres développeurs je vais essayer de détailler au mieux dans ce doc comment peut se décortiquer le fonctionnement de Printf.*

### Qu'est ce que Printf ?