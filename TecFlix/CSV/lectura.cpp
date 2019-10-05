#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

class lectura{
public:
    List lect() {
        ifstream lectura;
        lectura.open("/home/kev/CLionProjects/TecFlix/movie_data.csv");
        //cout << "va bien" << endl;
        string linea;
        List L;
        for (int fila = 0; getline(lectura, linea); ++fila) {
            //cout << "Pelicula #" << fila << endl;
            istringstream Linea(linea);
            string dato;
            if (fila == 0) {}
            else {
                Pelicula P;
                int temp=0;
                string tempstr="";
                for (int columna = 0; getline(Linea, dato, ','); ++columna) {
                    if (dato.front()=='"'||temp>0){
                        if (temp>0){
                            tempstr=tempstr+","+dato;
                            temp+=1;
                            columna--;
                            if(dato.back()=='"') {
                                dato = tempstr.substr(0,tempstr.size()-1);
                                temp=0;
                            }
                        }else{
                                tempstr=dato.substr(1);
                                temp+=1;
                        }
                    }
                    switch (columna) {
                        case 0: // color
                            P.setColor(dato);
                            //cout << dato + " :color" << endl;
                            break;
                        case 1: // director_name
                            P.setNombreDelDirector(dato);
                            //cout << dato + " :nombre director" << endl;
                            break;
                        case 2: // num_critic_for_reviews
                            P.setNumCriticasPorRev(dato);
                            //cout << dato + " :numero de criticas " << endl;
                            break;
                        case 3: // duration
                            P.setDuracion(dato);
                            //cout << dato + " :duración" << endl;
                            break;
                        case 4: // director_facebook_likes
                            P.setLikesFaceDirector(dato);
                            //cout << dato + " :numero de likes director facebook" << endl;
                            break;
                        case 5: // actor_3_facebook_likes
                            P.setLikesFaceAct3(dato);
                            //cout << dato + " :likes facebook actor 3" << endl;
                            break;
                        case 6: // actor_2_name
                            P.setNombreAct2(dato);
                            //cout << dato + " :nombre actor 2" << endl;
                            break;
                        case 7: // actor_1_facebook_likes
                            P.setLikesFaceAct1(dato);
                            //cout << dato + " :likes actor 1" << endl;
                            break;
                        case 8: // gross
                            P.setGanancia(dato);
                            //cout << dato + " :ganancia " << endl;
                            break;
                        case 9: // genres
                            P.setGenero(dato);
                            //cout << dato + " :generos" << endl;
                            break;
                        case 10: // actor_1_name
                            P.setNombreAct1(dato);
                            //cout << dato + " :nombre actor 1" << endl;
                            break;
                        case 11: //movie_title
                            P.setTitulo(dato);
                            //cout << dato + " :titulo" << endl;
                            break;
                        case 12: //num_voted_users
                            P.setUsuariosVotaron(dato);
                            //cout << dato + " :usuarios votados" << endl;
                            break;
                        case 13: //cast_total_facebook_likes
                            P.setLikesFaceCast(dato);
                            //cout << dato + " :likes totales cast" << endl;
                            break;
                        case 14: //actor_3_name
                            P.setNombreAct3(dato);
                            //cout << dato + " :nombre actor 3" << endl;
                            break;
                        case 15: //facenumber_in_poster
                            P.setCarasPoster(dato);
                            //cout << dato + " :numero de caras en poster" << endl;
                            break;
                        case 16: //plot_keywords
                            P.setPalabrasBusqueda(dato);
                            //cout << dato + " :palabras busqueda" << endl;
                            break;
                        case 17: //movie_imdb_link
                            P.setImdb(dato);
                            //cout << dato + " :link IMDB" << endl;
                            break;
                        case 18: //num_user_for_reviews
                            P.setUsuariosRev(dato);
                            //cout << dato + " :numero de usuarios a revision" << endl;
                            break;
                        case 19: //language
                            P.setIdioma(dato);
                            //cout << dato + " :idioma " << endl;
                            break;
                        case 20: //country
                            P.setPais(dato);
                            //cout << dato + " :pais" << endl;
                            break;
                        case 21: //content_rating
                            P.setContenido(dato);
                            //cout << dato + " :contenido" << endl;
                            break;
                        case 22: //budget
                            P.setPresupuesto(dato);
                            //cout << dato + " :presupuesto" << endl;
                            break;
                        case 23: //title_year
                            P.setAgno(dato);
                            //cout << dato + " :año" << endl;
                            break;
                        case 24: //actor_2_facebook_likes
                            P.setLikesFaceAct2(dato);
                            //cout << dato + " :likes actor 2" << endl;
                            break;
                        case 25: //imdb_score
                            P.setImdbScore(dato);
                            //cout << dato + " :score IMDB" << endl;
                            break;
                        case 26: //aspect_ratio
                            P.setAspecto(dato);
                            //cout << dato + " :relación de aspecto" << endl;
                            break;
                        case 27: //movie_facebook_likes
                            P.setLikesFacePeli(dato);
                            //cout << dato + " :likes facebook pelicula" << endl;
                            //cout << "\n" << endl;
                            //P.print(P);
                            L.add_head(P);
                            break;

                    }
                }
            }
        }
        //L.print();
    return L;
    }
};

