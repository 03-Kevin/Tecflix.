

#ifndef TECFLIX_LEERIMDB_H
#define TECFLIX_LEERIMDB_H

#include <string>
#include <cstdio>
#include <curl/curl.h>
#include <curl/easy.h>
#include <string>

using namespace std;
/**
 * A non-threadsafe simple libcURL-easy based HTTP downloader
 */
class HTTPDownloader {
public:
    HTTPDownloader();
    ~HTTPDownloader();
    /**
     * Download a file using HTTP GET and store in in a std::string
     * @param url The URL to download
     * @return The download result
     */
    std::string download(const std::string& url);
    string getImageURL(string data);
    string getTrailerURL(string data);
private:
    void* curl;


    bool download_jpeg(string rutaL, string url, int cont);

    size_t callbackfunction(void *ptr, size_t size, size_t nmemb, void *userdata);
};
#endif  /* HTTPDOWNLOADER_HPP */
