//
// Created by phil on 03.10.20.
//

#ifndef BITWISEFLAG_BITFLAGS_H
#define BITWISEFLAG_BITFLAGS_H

#define BIT(x) (1 << x)

#define BIT_OPERATORS(C) inline C operator|(C a, C b) { \
    return static_cast<C>(static_cast<int>(a) | static_cast<int>(b)); \
}\
inline bool operator==(C a, C b) { \
    return static_cast<int>(static_cast<C>(static_cast<int>(a) | static_cast<int>(b))) == static_cast<int>(a); \
}

#endif //BITWISEFLAG_BITFLAGS_H
