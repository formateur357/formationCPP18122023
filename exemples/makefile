# Nom de l'exécutable à produire
TARGET = mon_programme

# Compilateur C++ à utiliser
CXX = g++

# Options de compilation
CXXFLAGS = -Wall -g

# Trouver tous les fichiers .cpp dans le dossier courant
SOURCES = $(wildcard *.cpp)

# Convertir la liste des fichiers sources en une liste de fichiers objets
OBJECTS = $(SOURCES:.cpp=.o)

# La première règle est la cible par défaut
all: $(TARGET)

# Règle pour lier l'exécutable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Règle pour compiler les objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Règle pour nettoyer le projet
clean:
	rm -f $(OBJECTS) $(TARGET)

# Préciser les cibles qui ne correspondent pas à des fichiers
.PHONY: all clean

# Explication
# 1. Variables :

# TARGET spécifie le nom de l'exécutable.
# CXX est le compilateur à utiliser (g++ par défaut pour C++).
# CXXFLAGS contient les options de compilation (ici, -Wall pour afficher tous les avertissements et -g pour les informations de débogage).

# 2. Cibles et Règles :

# all : Cible par défaut qui sera construite lorsque vous exécuterez simplement make.
# $(TARGET) : Construit l'exécutable.
# %.o: %.cpp : Règle de modèle pour compiler les fichiers .cpp en fichiers .o.
# clean : Cible pour nettoyer le projet (supprimer les fichiers objets et l'exécutable).

# 3. Automatisation :

# SOURCES détecte automatiquement tous les fichiers .cpp.
# OBJECTS convertit cette liste en une liste de fichiers objets.
# Pour utiliser ce Makefile, placez-le dans le même dossier que vos fichiers source .cpp et exécutez simplement make dans votre terminal. Pour nettoyer le projet (supprimer les fichiers objets et l'exécutable), utilisez make clean.