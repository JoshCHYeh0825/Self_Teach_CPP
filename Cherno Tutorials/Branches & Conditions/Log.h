/*

"#pragma once"c cmeans to only include once.
#pragma is a header guard. What this means it only lets us inlcude this header file into a translation unit ONCE

*/

#ifndef _LOG_H // Checks to see if a symbol called _LOG_H is defined,nif defined none of the body will be included
#define _LOG_H

//#pragma once

void InitLog();
void Log(const char* message);

struct Player{};

#endif