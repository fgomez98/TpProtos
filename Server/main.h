//
// Created by Fermin Gomez on 5/31/19.
//

#ifndef TPPROTOS_MAIN_H
#define TPPROTOS_MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <stdlib.h>
#include<fcntl.h>
#include <netinet/in.h>
#include <string.h>

struct t_request {
    char              *method, *path, *host;
    int               version;
    struct phr_header *headers;
    size_t            num_headers;
    size_t            bad_request;
    size_t            port;
};

int server(int port);

struct t_request handleClientRequest(int requestReadfp);

void freeRequest(struct t_request request);

int client(char *hostname, size_t port);

void trim(char *line);

void do_http_request(struct t_request request, char *protocol, FILE *originWritefp);

void do_http_response(FILE *clientWritefp, FILE *originReadfp);

#endif //TPPROTOS_MAIN_H
