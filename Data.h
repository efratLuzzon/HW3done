//
// Created by user on 20/12/2019.
//
#pragma once

#ifndef JJKUUKYFKUTFYLIGUOHIL_DATA_H
#define JJKUUKYFKUTFYLIGUOHIL_DATA_H

#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <mutex>
#include <condition_variable>
#include <queue>
#include "Command.h"
#include "ProgVariables.h"
#include "ProgramInclude.h"

//define of XML variabels
#define V1 "/instrumentation/airspeed-indicator/indicated-speed-kt"
#define V2 "/sim/time/warp"
#define V3 "/controls/switches/magnetos"
#define V4 "/instrumentation/heading-indicator/offset-deg"
#define V5 "/instrumentation/altimeter/indicated-altitude-ft"
#define V6 "/instrumentation/altimeter/pressure-alt-ft"
#define V7 "/instrumentation/attitude-indicator/indicated-pitch-deg"
#define V8 "/instrumentation/attitude-indicator/indicated-roll-deg"
#define V9 "/instrumentation/attitude-indicator/internal-pitch-deg"
#define V10 "/instrumentation/attitude-indicator/internal-roll-deg"
#define V11 "/instrumentation/encoder/indicated-altitude-ft"
#define V12 "/instrumentation/encoder/pressure-alt-ft"
#define V13 "/instrumentation/gps/indicated-altitude-ft"
#define V14 "/instrumentation/gps/indicated-ground-speed-kt"
#define V15 "/instrumentation/gps/indicated-vertical-speed"
#define V16 "/instrumentation/heading-indicator/indicated-heading-deg"
#define V17 "/instrumentation/magnetic-compass/indicated-heading-deg"
#define V18 "/instrumentation/slip-skid-ball/indicated-slip-skid"
#define V19 "/instrumentation/turn-indicator/indicated-turn-rate"
#define V20 "/instrumentation/vertical-speed-indicator/indicated-speed-fpm"
#define V21 "/controls/flight/aileron"
#define V22 "/controls/flight/elevator"
#define V23 "/controls/flight/rudder"
#define V24 "/controls/flight/flaps"
#define V25 "/controls/engines/engine/throttle"
#define V26 "/controls/engines/current-engine/throttle"
#define V27 "/controls/switches/master-avionics"
#define V28 "/controls/switches/starter"
#define V29 "/engines/active-engine/auto-start"
#define V30 "/controls/flight/speedbrake"
#define V31 "/sim/model/c172p/brake-parking"
#define V32 "/controls/engines/engine/primer"
#define V33 "/controls/engines/current-engine/mixture"
#define V34 "/controls/switches/master-bat"
#define V35 "/controls/switches/master-alt"
#define V36 "/engines/engine/rpm"

class Data {
public:
    static unordered_map<string, ProgVariables*>* _progTable; //program vars
    static unordered_map<string, command*>* _commandsMap;
    static unordered_map<string, pair<string,vector<string>*>>* _funcsMap;
    static vector<string>::iterator it;
    static unordered_map<string, pair<float,ProgVariables*>>* _generalSimVariable;
    static queue<string> messageToSend;
    static std::mutex mutexGeneralSimVariable;
    static std::string data;
    static bool serverFinish;
    static bool stopLoopServer;
    static bool stopLoopClient;

};

#endif //JJKUUKYFKUTFYLIGUOHIL_DATA_H
