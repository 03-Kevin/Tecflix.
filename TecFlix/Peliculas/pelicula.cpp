

#include "pelicula.h"

const string &Pelicula::getColor() const {
    return color;
}

void Pelicula::setColor(const string &color) {
    Pelicula::color = color;
}

const string &Pelicula::getNombreDelDirector() const {
    return nombre_del_director;
}

void Pelicula::setNombreDelDirector(const string &nombreDelDirector) {
    nombre_del_director = nombreDelDirector;
}

const string &Pelicula::getNumCriticasPorRev() const {
    return num_criticas_por_rev;
}

void Pelicula::setNumCriticasPorRev(const string &numCriticasPorRev) {
    num_criticas_por_rev = numCriticasPorRev;
}

const string &Pelicula::getDuracion() const {
    return duracion;
}

void Pelicula::setDuracion(const string &duracion) {
    Pelicula::duracion = duracion;
}

const string &Pelicula::getLikesFaceDirector() const {
    return likes_face_director;
}

void Pelicula::setLikesFaceDirector(const string &likesFaceDirector) {
    likes_face_director = likesFaceDirector;
}

const string &Pelicula::getLikesFaceAct3() const {
    return likes_face_act3;
}

void Pelicula::setLikesFaceAct3(const string &likesFaceAct3) {
    likes_face_act3 = likesFaceAct3;
}

const string &Pelicula::getNombreAct2() const {
    return nombre_act2;
}

void Pelicula::setNombreAct2(const string &nombreAct2) {
    nombre_act2 = nombreAct2;
}

const string &Pelicula::getLikesFaceAct1() const {
    return likes_face_act1;
}

void Pelicula::setLikesFaceAct1(const string &likesFaceAct1) {
    likes_face_act1 = likesFaceAct1;
}

const string &Pelicula::getGanancia() const {
    return ganancia;
}

void Pelicula::setGanancia(const string &ganancia) {
    Pelicula::ganancia = ganancia;
}

const string &Pelicula::getGenero() const {
    return genero;
}

void Pelicula::setGenero(const string &genero) {
    Pelicula::genero = genero;
}

const string &Pelicula::getNombreAct1() const {
    return nombre_act1;
}

void Pelicula::setNombreAct1(const string &nombreAct1) {
    nombre_act1 = nombreAct1;
}

const string &Pelicula::getTitulo() const {
    return titulo;
}

void Pelicula::setTitulo(const string &titulo) {
    Pelicula::titulo = titulo;
}

const string &Pelicula::getUsuariosVotaron() const {
    return usuarios_votaron;
}

void Pelicula::setUsuariosVotaron(const string &usuariosVotaron) {
    usuarios_votaron = usuariosVotaron;
}

const string &Pelicula::getLikesFaceCast() const {
    return likes_face_cast;
}

void Pelicula::setLikesFaceCast(const string &likesFaceCast) {
    likes_face_cast = likesFaceCast;
}

const string &Pelicula::getNombreAct3() const {
    return nombre_act3;
}

void Pelicula::setNombreAct3(const string &nombreAct3) {
    nombre_act3 = nombreAct3;
}

const string &Pelicula::getCarasPoster() const {
    return caras_poster;
}

void Pelicula::setCarasPoster(const string &carasPoster) {
    caras_poster = carasPoster;
}

const string &Pelicula::getPalabrasBusqueda() const {
    return palabras_busqueda;
}

void Pelicula::setPalabrasBusqueda(const string &palabrasBusqueda) {
    palabras_busqueda = palabrasBusqueda;
}

const string &Pelicula::getImdb() const {
    return IMDB;
}

void Pelicula::setImdb(const string &imdb) {
    IMDB = imdb;
}

const string &Pelicula::getUsuariosRev() const {
    return usuarios_rev;
}

void Pelicula::setUsuariosRev(const string &usuariosRev) {
    usuarios_rev = usuariosRev;
}

const string &Pelicula::getIdioma() const {
    return idioma;
}

void Pelicula::setIdioma(const string &idioma) {
    Pelicula::idioma = idioma;
}

const string &Pelicula::getPais() const {
    return pais;
}

void Pelicula::setPais(const string &pais) {
    Pelicula::pais = pais;
}

const string &Pelicula::getContenido() const {
    return contenido;
}

void Pelicula::setContenido(const string &contenido) {
    Pelicula::contenido = contenido;
}

const string &Pelicula::getPresupuesto() const {
    return presupuesto;
}

void Pelicula::setPresupuesto(const string &presupuesto) {
    Pelicula::presupuesto = presupuesto;
}

const string &Pelicula::getAgno() const {
    return agno;
}

void Pelicula::setAgno(const string &agno) {
    Pelicula::agno = agno;
}

const string &Pelicula::getLikesFaceAct2() const {
    return likes_face_act2;
}

void Pelicula::setLikesFaceAct2(const string &likesFaceAct2) {
    likes_face_act2 = likesFaceAct2;
}

const string &Pelicula::getImdbScore() const {
    return imdb_score;
}

void Pelicula::setImdbScore(const string &imdbScore) {
    imdb_score = imdbScore;
}

const string &Pelicula::getAspecto() const {
    return aspecto;
}

void Pelicula::setAspecto(const string &aspecto) {
    Pelicula::aspecto = aspecto;
}

const string &Pelicula::getLikesFacePeli() const {
    return likes_face_peli;
}

void Pelicula::setLikesFacePeli(const string &likesFacePeli) {
    likes_face_peli = likesFacePeli;
}
void Pelicula::print(Pelicula pelicula) {
    cout << "color: " << pelicula.color << " nombre_del_director: " << pelicula.nombre_del_director
         << " num_criticas_por_rev: " << pelicula.num_criticas_por_rev << " duracion: " << pelicula.duracion
         << " likes_face_director: " << pelicula.likes_face_director << " likes_face_act3: "
         << pelicula.likes_face_act3 << " nombre_act2: " << pelicula.nombre_act2 << " likes_face_act1: "
         << pelicula.likes_face_act1 << " ganancia: " << pelicula.ganancia << " genero: " << pelicula.genero
         << " nombre_act1: " << pelicula.nombre_act1 << " titulo: " << pelicula.titulo << " usuarios_votaron: "
         << pelicula.usuarios_votaron << " likes_face_cast: " << pelicula.likes_face_cast << " nombre_act3: "
         << pelicula.nombre_act3 << " caras_poster: " << pelicula.caras_poster << " palabras_busqueda: "
         << pelicula.palabras_busqueda << " IMDB: " << pelicula.IMDB << " usuarios_rev: " << pelicula.usuarios_rev
         << " idioma: " << pelicula.idioma << " pais: " << pelicula.pais << " contenido: " << pelicula.contenido
         << " presupuesto: " << pelicula.presupuesto << " agno: " << pelicula.agno << " likes_face_act2: "
         << pelicula.likes_face_act2 << " imdb_score: " << pelicula.imdb_score << " aspecto: " << pelicula.aspecto
         << " likes_face_peli: " << pelicula.likes_face_peli << endl;
}
