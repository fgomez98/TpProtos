//
// Created by Fermin Gomez on 6/9/19.
//

#ifndef TPPROTOS_PROXY_REPORTER_H
#define TPPROTOS_PROXY_REPORTER_H

#include <stdio.h>


enum report {
    REPORT_500,
    REPORT_TRANSFORMATION_ERROR,
    REPORT_502,
    REPORT_503,
    REPORT_507,
    REPORT_400
};

void
report(int client_fd, enum report);

#endif //TPPROTOS_PROXY_REPORTER_H
