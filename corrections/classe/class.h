#include <string>

using namespace std;

class Utilisateur
{
private:
    string nom;
    int age;
    string email;

public:
    Utilisateur(const string &nom = NULL, int age = 0, const string &email = NULL);

    ~Utilisateur();

    string getNom() const;

    int getAge() const;

    string getEmail() const;

    void setNom(const string &nouveauNom);

    void setAge(const int nouvelAge);

    void setEmail(const string &nouvelEmail);
};
