/*
 * =====================================================================================
 *
 *       Filename:  controlLayer.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/25/2017 09:38:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Baoxing Song (songbx.me), songbaoxing168@163.com
 *
 * =====================================================================================
 */
/*************************************************************************




 ************************************************************************/

#ifndef _CONTROLLAYER_H
#define _CONTROLLAYER_H

#include <iostream>
#include "InputParser.h"
#include <sstream>
#include "./util/util.h"
#include "./model/model.h"
#include "./service/service.h"
#include "./impl/impl.h"
#include "./myImportandFunction/myImportantFunction.h"

int gff2seq(int argc, char** argv, std::map<std::string, std::string>& parameters);

int genomeAlignment(int argc, char** argv, std::map<std::string, std::string>& parameters );
int proportationalAlignment(int argc, char** argv, std::map<std::string, std::string>& parameters );
#endif
