#pragma once

#ifdef PS2_PLATFORM

#include <string>
#include <memory>
#include <istream>

namespace Ps2AsyncAssetLoader
{
    enum class State
    {
        Missing,
        Ready,
        Failed
    };

    inline void cancelAll() {}
    inline void shutdown() {}
    inline State state(const std::string &) { return State::Missing; }
    inline std::unique_ptr<std::istream> takeStream(const std::string &) { return nullptr; }
    inline void release(const std::string &) {}
    inline bool request(const std::string &) { return false; }
}

#endif // PS2_PLATFORM
