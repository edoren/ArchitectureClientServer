#pragma once

#include <ostream>

enum class ServerCodes : int {
    SUCCESS, OK = 0,

    // Network connection codes
    IDENTITY_NOT_CONNECTED = 0x3E8,
    IDENTITY_ALREADY_CONNECTED,

    // User related codes
    USER_ALREADY_CONNECTED = 0x7D0,
    USER_NOT_CONNECTED,
    USER_ALREADY_EXIST,
    USER_DOES_NOT_EXIST,
    USER_WRONG_PASSWORD,
    USER_INCORRECT_IDENTITY,
    USER_INCORRECT_TOKEN,

    // Group related codes
    GROUP_ALREADY_EXIST = 0xBB8,
    GROUP_DOES_NOT_EXIST
};

std::ostream& operator<<(std::ostream& o, ServerCodes code) {
    return o << static_cast<int>(code);
}