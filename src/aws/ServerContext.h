//
// Created by plter on 5/19/15.
//

#ifndef ASYNCWEBSERVER_APPCONTEXT_H
#define ASYNCWEBSERVER_APPCONTEXT_H


#include "Context.h"

class ServerContext : public Context {

public:
    int getServerPort();
};


#endif //ASYNCWEBSERVER_APPCONTEXT_H