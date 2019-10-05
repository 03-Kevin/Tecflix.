

#ifndef TECFLIX_DESCARGA_H
#define TECFLIX_DESCARGA_H

#include <cstdio>
#include <curl/curl.h>
#include <string>
using namespace std;

class descarga {
public:
    bool download_jpeg(string ruta,string url,int i);
};


#endif //TECFLIX_DESCARGA_H
