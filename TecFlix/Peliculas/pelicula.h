

#ifndef TECFLIX_PELICULA_H
#define TECFLIX_PELICULA_H

#include <string>
#include <iostream>
using namespace std;

class Pelicula {
protected:
    string color;//
    string nombre_del_director;//
    string num_criticas_por_rev;
    string duracion;//
    string likes_face_director;
    string likes_face_act3;
    string nombre_act2;//
    string likes_face_act1;
    string ganancia;//
    string genero;//
    string nombre_act1;//
    string titulo;//
    string usuarios_votaron;
    string likes_face_cast;
    string nombre_act3;//
    string caras_poster;
    string palabras_busqueda;
    string IMDB;//
    string usuarios_rev;
    string idioma;//
    string pais;//
    string contenido;//
    string presupuesto;//
    string agno;//
    string likes_face_act2;
    string imdb_score;//
    string aspecto;//
    string likes_face_peli;//
public:
    const string &getColor() const;

    void setColor(const string &color);

    const string &getNombreDelDirector() const;

    void setNombreDelDirector(const string &nombreDelDirector);

    const string &getNumCriticasPorRev() const;

    void setNumCriticasPorRev(const string &numCriticasPorRev);

    const string &getDuracion() const;

    void setDuracion(const string &duracion);

    const string &getLikesFaceDirector() const;

    void setLikesFaceDirector(const string &likesFaceDirector);

    const string &getLikesFaceAct3() const;

    void setLikesFaceAct3(const string &likesFaceAct3);

    const string &getNombreAct2() const;

    void setNombreAct2(const string &nombreAct2);

    const string &getLikesFaceAct1() const;

    void setLikesFaceAct1(const string &likesFaceAct1);

    const string &getGanancia() const;

    void setGanancia(const string &ganancia);

    const string &getGenero() const;

    void setGenero(const string &genero);

    const string &getNombreAct1() const;

    void setNombreAct1(const string &nombreAct1);

    const string &getTitulo() const;

    void setTitulo(const string &titulo);

    const string &getUsuariosVotaron() const;

    void setUsuariosVotaron(const string &usuariosVotaron);

    const string &getLikesFaceCast() const;

    void setLikesFaceCast(const string &likesFaceCast);

    const string &getNombreAct3() const;

    void setNombreAct3(const string &nombreAct3);

    const string &getCarasPoster() const;

    void setCarasPoster(const string &carasPoster);

    const string &getPalabrasBusqueda() const;

    void setPalabrasBusqueda(const string &palabrasBusqueda);

    const string &getImdb() const;

    void setImdb(const string &imdb);

    const string &getUsuariosRev() const;

    void setUsuariosRev(const string &usuariosRev);

    const string &getIdioma() const;

    void setIdioma(const string &idioma);

    const string &getPais() const;

    void setPais(const string &pais);

    const string &getContenido() const;

    void setContenido(const string &contenido);

    const string &getPresupuesto() const;

    void setPresupuesto(const string &presupuesto);

    const string &getAgno() const;

    void setAgno(const string &agno);

    const string &getLikesFaceAct2() const;

    void setLikesFaceAct2(const string &likesFaceAct2);

    const string &getImdbScore() const;

    void setImdbScore(const string &imdbScore);

    const string &getAspecto() const;

    void setAspecto(const string &aspecto);

    const string &getLikesFacePeli() const;

    void setLikesFacePeli(const string &likesFacePeli);

    void print(Pelicula pelicula);
};


#endif //TECFLIX_PELICULA_H
