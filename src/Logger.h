//
// Created by lablnet on 11/4/20.
//

#include <string>

#ifndef LOGGER_H
#define LOGGER_H

enum  LEVELS {
    ERROR, WARNING, INFO, EMERGENCY, ALERT, CRITICAL, NOTICE, DEBUG
};


class Logger {
    LEVELS level;
    std::string message;

public:
    Logger(LEVELS level, const std::string &message) {
        this->level = level;
        this->message = message;
    }

};


#endif //LOGGER_H
